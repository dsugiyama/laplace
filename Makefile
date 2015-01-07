all: lap.c lap-thread.c
	xmpcc -O3 lap.c -o lap -lm
	xmpcc -O3 -enable-threads lap-thread.c -o lap-thread -lm
clean:
	rm -f *.o *~ lap
