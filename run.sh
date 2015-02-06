sizes1d="1 2 4 8 16 32 60 120 240"
sizes2d="1x1 1x2 2x2 2x4 4x4 4x8 6x10 10x12 15x16"

niter=$1
mic=$2

exec_mpi_1d() {
    echo $1
    for s in $sizes1d; do
        python aggregate.py $niter $mic -- \
        XMP_NODE_SIZE0=$s mpirun -n $s ./$1
    done
    echo
}

exec_mpi_2d() {
    echo $1
    for s in $sizes2d; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $niter $mic -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 mpirun -n $(($s0 * $s1)) ./$1
    done
    echo
}

exec_threads_1d() {
    echo $1
    for s in $sizes1d; do
        python aggregate.py $niter $mic -- \
        XMP_NODE_SIZE0=$s ./$1
    done
    echo
}

exec_threads_2d() {
    echo $1
    for s in $sizes2d; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $niter $mic -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 ./$1
    done
    echo
}

exec_omp() {
    echo $1
    for s in $sizes1d; do
        python aggregate.py $niter $mic -- \
        OMP_NUM_THREADS=$s ./$1
    done
    echo
}

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
