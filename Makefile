CC = gcc
CFLAGS = -Wall -Wextra

all: main

main: main.o lista.o
	$(CC) $(CFLAGS) -o main main.o lista.o

main.o: src/main.c src/lista.h
	$(CC) $(CFLAGS) -c src/main.c

lista.o: src/lista.c src/lista.h
	$(CC) $(CFLAGS) -c src/lista.c

clean:
	rm -f *.o main
