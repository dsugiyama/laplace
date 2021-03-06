#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#ifdef _XCALABLEMP
#include <xmp.h>
#endif

// Edit "XSIZE", "nodes", "template" and "task", before you compile & run this file.

/* square region */
#define XSIZE (1024)
#define YSIZE XSIZE

#define PI M_PI
double u[XSIZE][YSIZE], uu[XSIZE][YSIZE];
int rank, niter;

#pragma xmp nodes p(*, *) // p(y, x) y <= x
#pragma xmp template t(0:(1024)-1, 0:(1024)-1) // t(0:XSIZE-1, 0:YSIZE-1)
#pragma xmp distribute t(block, block) onto p
#pragma xmp align u[j][i] with t(i, j)
#pragma xmp align uu[j][i] with t(i, j)
#pragma xmp shadow uu[1:1][1:1]

static void lap_main(void);
static void verify(void);

int main(int argc, char* argv[]){
  int x, y;
  double time;
  double value;

#ifdef _XCALABLEMP
  rank = xmp_node_num() - 1;
#else
  rank = 0;
#endif

  /* setting parameter */
  if(argc == 1) niter = 100;
  else niter = atoi(argv[1]);
  if(rank == 0) {
    fprintf(stderr, "The number of iterations = %d\n", niter);
    fprintf(stderr, "Matrix Size = %d x %d\n", XSIZE, YSIZE);
  }

  /* initalize */
#pragma xmp loop (y, x) on t(y, x)
  for(x = 0; x < XSIZE; x++){
    for(y = 0; y < YSIZE; y++){
      u[x][y] = 0.0; uu[x][y] = 0.0;
    }
  }

#pragma xmp loop (y, x) on t(y, x)
  for(x = 1; x < XSIZE-1; x++)
    for(y = 1; y < YSIZE-1; y++)
      u[x][y] = sin((double)(x-1)/XSIZE*PI) + cos((double)(y-1)/YSIZE*PI);

#pragma xmp barrier
  time = xmp_wtime();
  lap_main();
#pragma xmp barrier
  time -= xmp_wtime();
  time = -time;
  
  value = verify();

#pragma xmp reduction(MAX:time) on p
  if(rank == 0){
    fprintf(stderr, "time = %.3f sec\n", time);
    fprintf(stderr, "Per. = %.3f GFlops\n", (double)niter*(XSIZE-2)*(YSIZE-2)*4/time/1000/1000/1000);
    fprintf(stderr, "Verification = %.3f \n", value);
  }

  return 0;
}

void lap_main(void){
  int x, y, k;
  double sum;

  /* Output intermediate the number of iterations */
  for(k = 0; k < niter; k++){
    if(k%(niter/10) == 0 && k != 0 && rank == 0)
      fprintf(stderr, "iter = %d\n", k);

    /* old <- new */
#pragma xmp loop (y, x) on t(y, x)
    for(x = 1; x < XSIZE-1; x++)
      for(y = 1; y < YSIZE-1; y++)
	uu[x][y] = u[x][y];

#pragma xmp reflect(uu)

    /* update */
#pragma xmp loop (y, x) on t(y, x)
    for(x = 1; x < XSIZE-1; x++)
      for(y = 1; y < YSIZE-1; y++)
	u[x][y] = (uu[x-1][y] + uu[x+1][y] + uu[x][y-1] + uu[x][y+1])/4.0;

  } // end of niter
}

double verify(){
  int x, y;
  double sum = 0.0;

#pragma xmp loop (y, x) on t(y, x) reduction(+:sum)
  for(x = 1; x < XSIZE-1; x++)
    for(y = 1; y < YSIZE-1; y++)
      sum += (uu[x][y]-u[x][y]);

  return sum;
}
