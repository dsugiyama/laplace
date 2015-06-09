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
        KMP_AFFINITY=balanced OMP_NUM_THREADS=$s ./$1
    done
    echo
}
