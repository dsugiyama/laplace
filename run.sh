scp -q *.mic "mic0:~/tmp"

for exe in *mpi*1d*.mic; do
	echo ${exe%\.mic}
	for size in 1 2 4 8 16 32 64 128 240; do
		python aggregate.py $1 -- \
		XMP_NODE_SIZE0=$size mpirun -n $size ./$exe
	done
	echo
done

for exe in *mpi*2d*.mic; do
	echo ${exe%\.mic}
	for size in 1x1 1x2 2x2 2x4 4x4 4x8 8x8 8x16 15x16; do
		s0=${size%x*}
		s1=${size#*x}
		python aggregate.py $1 -- \
		XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 mpirun -n $(($s0 * $s1)) ./$exe
	done
	echo
done

for exe in *threads*1d*.mic; do
	echo ${exe%\.mic}
	for size in 1 2 4 8 16 32 64 128 240; do
		python aggregate.py $1 -- \
		XMP_NODE_SIZE0=$size ./$exe
	done
	echo
done

for exe in *threads*2d*.mic; do
	echo ${exe%\.mic}
	for size in 1x1 1x2 2x2 2x4 4x4 4x8 8x8 8x16 15x16; do
		s0=${size%x*}
		s1=${size#*x}
		python aggregate.py $1 -- \
		XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 ./$exe
	done
	echo
done

for exe in *omp*.mic; do
	echo ${exe%\.mic}
	for size in 1 2 4 8 16 32 64 128 240; do
		python aggregate.py $1 -- \
		OMP_NUM_THREADS=$size ./$exe
	done
	echo
done
