list: main.o linked_list.o
	clang main.o linked_list.o -o list

main.o: main.c linked_list.h
	clang -c main.c

linked_list.o: linked_list.h
	clang -c linked_list.c
