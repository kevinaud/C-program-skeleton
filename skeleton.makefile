CFLAGS=-Wall -std=c11
LIBS=-lcheck

all: skeleton

skeleton: skeleton.o functions.o
	gcc -o skeleton skeleton.o functions.o

skeleton.o: skeleton.c functions.h
	gcc $(CFLAGS) -c skeleton.c

functions.o: functions.c functions.h
	gcc $(CFLAGS) -c functions.c

test: skeleton-test
	./skeleton-test

skeleton-test: functions-test.o functions.o
	gcc -o skeleton-test functions.o functions-test.o $(LIBS)

functions-test.o: functions-test.c functions.h
	gcc $(CFLAGS) -c functions-test.c

functions-test.c: functions-test.check
	checkmk functions-test.check > functions-test.c
