CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -g

main: struct.o list.o main.c
	$(CC) $(CFLAGS) main.c struct.c list.c -o main

struct: struct.c
	$(CC) $(CFLAGS) struct.c -o struct.o

list: list.c
	$(CC) $(CFLAGS) list.c -o list.o

clean:
	rm -f *.o main

