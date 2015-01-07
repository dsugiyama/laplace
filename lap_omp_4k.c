#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <omp.h>

#define SIZE 4096

double u[SIZE][SIZE], uu[SIZE][SIZE];
int niter;

void lap_main();
double verify();
double gettime();

int main(int argc, char *argv[])
{
	if (argc == 1) {
		niter = 100;
	} else {
		niter = atoi(argv[1]);
	}

	fprintf(stderr, "The number of iterations = %d\n", niter);
	fprintf(stderr, "Matrix size = %d x %d\n", SIZE, SIZE);

	for (int x = 0; x < SIZE; x++) {
		for (int y = 0; y < SIZE; y++) {
			u[x][y] = 0.0;
			uu[x][y] = 0.0;
		}
	}

	for (int x = 1; x < SIZE - 1; x++) {
		for (int y = 1; y < SIZE - 1; y++) {
			u[x][y] = sin((double)(x - 1) / SIZE * M_PI)
				+ cos((double)(y - 1) / SIZE * M_PI);
		}
	}

	double t1 = gettime();
	lap_main();
	double t2 = gettime();

	double value = verify();

	double gflops = (double)niter * (SIZE - 2) * (SIZE - 2) * 4
		/ (t2 - t1) / 1000 / 1000 / 1000);

	fprintf(stderr, "Time = %.3f sec\n", t2 - t1);
	fprintf(stderr, "Per. = %.3f GFlops\n", gflops);
	fprintf(stderr, "Verification = %.3f\n", value);

	return 0;
}

void lap_main()
{
	#pragma omp parallel
	{
		int id = omp_get_thread_num();

		for (int k = 0; k < niter; k++) {
			if (k % (niter / 10) == 0 && k != 0 && id == 0) {
				fprintf(stderr, "iter = %d\n", k);
			}

			#pragma omp for
			for (int x = 1; x < SIZE - 1; x++) {
				for (int y = 1; y < SIZE - 1; y++) {
					uu[x][y] = u[x][y];
				}
			}

			#pragma omp for
			for (int x = 1; x < SIZE - 1; x++) {
				for (int y = 1; y < SIZE - 1; y++) {
					u[x][y] = (uu[x - 1][y] + uu[x + 1][y]
						+ uu[x][y - 1] + uu[x][y + 1]) / 4.0;
				}
			}
		}
	}
}

double verify()
{
	double sum = 0.0;

	for (int x = 1; x < SIZE - 1; x++) {
		for (int y = 1; y < SIZE - 1; y++) {
			sum += (uu[x][y] - u[x][y]);
		}
	}

	return sum;
}

double gettime()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (double)tv.tv_sec + (double)tv.tv_usec / 1000 / 1000;
}
