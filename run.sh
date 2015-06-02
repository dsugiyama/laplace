sizes1d="1 2 4 8 16 32 60 120 240"
sizes2d="1x1 1x2 2x2 2x4 4x4 4x8 6x10 10x12 15x16"

niter=$1
mic=$2

. ./rundef.sh

exec_mpi_1d lap_mpi_1d-1K
exec_mpi_2d lap_mpi_2d-1K
exec_threads_1d lap_threads_1d-1K
exec_threads_2d lap_threads_2d-1K
exec_omp lap_omp-1K
exec_mpi_1d lap_mpi_1d-4K
exec_mpi_2d lap_mpi_2d-4K
exec_threads_1d lap_threads_1d-4K
exec_threads_2d lap_threads_2d-4K
exec_omp lap_omp-4K
