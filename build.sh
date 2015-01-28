for src in *mpi*.c; do
	body=${src%\.c}
	exe=${body#__omni_tmp_}
	mpiicc -mmic -O3 $src -o ${exe}.mic -lm -lxmp \
	-I$HOME/omni-compiler/include -L$HOME/omni-compiler/lib \
	-std=gnu99 -openmp -fno-alias
done

for src in *threads*.c; do
	body=${src%\.c}
	exe=${body#__omni_tmp_}
	mpiicc -mmic -O3 $src -o ${exe}.mic -lm -lxmp -lpthread \
	-I$HOME/omnixmp-threads/include -L$HOME/omnixmp-threads/lib \
	-std=gnu99 -openmp -fno-alias
done

for src in *omp*.c; do
	icc -mmic -O3 $src -o ${src%\.c}.mic -lm -std=gnu99 -openmp -fno-alias
done
