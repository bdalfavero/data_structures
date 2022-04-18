# makefile for matrix/vector program

matvec: main.o matvec.o
	clang -g main.o matvec.o -o matvec

main.o: main.c matvec.h matvec.c
	clang -g -c main.c -o main.o

matvec.o: matvec.h matvec.c
	clang -g -c matvec.c -o matvec.o
