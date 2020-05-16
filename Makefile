CFLAGS = -std=c99 -Wall -Wextra -Wpedantic

c99: c99.o

c99.o: c99.c

all: c99

clean:
	rm -f c99 *.a *.o

.PHONY: clean

