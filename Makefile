CFLAGS = -std=c99 -static

cc:
	$(CC) cc.c -o $@

all: cc

clean:
	rm -f cc *.o

.PHONY: test clean

