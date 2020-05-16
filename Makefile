CFLAGS = -std=c99 -Wall -Wextra -Wpedantic

scc: scc.o

scc.o: scc.c

all: scc

clean:
	rm -f scc *.a *.o

.PHONY: clean

