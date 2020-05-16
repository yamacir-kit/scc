CFLAGS = -std=c99 -static

c99:
	$(CC) c99.c -o $@

all: c99

clean:
	rm -f c99 *.a *.o

.PHONY: test clean

