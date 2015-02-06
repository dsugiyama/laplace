CC = icc
MPI_CC = mpiicc
CFLAGS = -mmic -O3 -ipo -fno-alias -std=gnu99 -openmp
XMPFLAGS = -lxmp
MPIFLAGS = -I${HOME}/omni-compiler/include -L${HOME}/omni-compiler/lib
THREADSFLAGS = -lpthread -I${HOME}/omnixmp-threads/include -L${HOME}/omnixmp-threads/lib

TARGETS = lap_mpi_1d-1K lap_mpi_1d-4K lap_mpi_2d-1K lap_mpi_2d-4K \
          lap_threads_1d-1K lap_threads_1d-4K lap_threads_2d-1K lap_threads_2d-4K \
          lap_omp-1K lap_omp-4K

all: ${TARGETS}

lap_mpi_1d-1K: lap_mpi_1d.trans.c
	${MPI_CC} -o $@ lap_mpi_1d.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSIZE=1024
lap_mpi_1d-4K: lap_mpi_1d.trans.c
	${MPI_CC} -o $@ lap_mpi_1d.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSIZE=4096
lap_mpi_2d-1K: lap_mpi_2d.trans.c
	${MPI_CC} -o $@ lap_mpi_2d.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSIZE=1024
lap_mpi_2d-4K: lap_mpi_2d.trans.c
	${MPI_CC} -o $@ lap_mpi_2d.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSIZE=4096
lap_threads_1d-1K: lap_threads_1d.trans.c
	${MPI_CC} -o $@ lap_threads_1d.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSIZE=1024
lap_threads_1d-4K: lap_threads_1d.trans.c
	${MPI_CC} -o $@ lap_threads_1d.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSIZE=4096
lap_threads_2d-1K: lap_threads_2d.trans.c
	${MPI_CC} -o $@ lap_threads_2d.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSIZE=1024
lap_threads_2d-4K: lap_threads_2d.trans.c
	${MPI_CC} -o $@ lap_threads_2d.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSIZE=4096
lap_omp-1K: lap_omp.c
	${CC} -o $@ lap_omp.c ${CFLAGS} -DSIZE=1024
lap_omp-4K: lap_omp.c
	${CC} -o $@ lap_omp.c ${CFLAGS} -DSIZE=4096

run: deploy
	sh run.sh ${NITER} ${MIC}

deploy:
	scp ${TARGETS} "${MIC}:~/tmp"

clean:
	rm ${TARGETS} *.o
