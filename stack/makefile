stack: main.o stack.o
	clang stack.o main.o -o stack

stack.o: stack.h
	clang -c stack.c -o stack.o

main.o: stack.h stack.c main.c
	clang -c main.c -o main.o
