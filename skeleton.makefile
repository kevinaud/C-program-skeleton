CFLAGS=-Wall
LIBS=-lcheck

all: skeleton

skeleton: main.o functions.o
	gcc -o skeleton main.o functions.o

main.o: main.c functions.h
	gcc $(CFLAGS) -c main.c

functions.o: functions.c functions.h
	gcc $(CFLAGS) -c functions.c

test: skeleton-test
	./skeleton-test

skeleton-test: functions-test.o functions.o
	gcc -o skeleton-test functions.o functions-test.o $(LIBS)

functions-test.o: functions-test.c functions.h
	gcc $(CFLAGS) -c functions-test.c
