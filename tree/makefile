# compilation for binary search tree program

tree: main.o tree.o
	clang main.o tree.o -o tree

tree.o: tree.h tree.c
	clang -c tree.c -o tree.o

main.o: tree.h main.c
	clang -c main.c -o main.o
