#include <stdio.h>
#include<stdlib.h>
#include "linked_list.h"

int main() {
	
	elem head = make_element(0);

	print_list(head);

	for (int i = 1; i <= 10; i++) {
		elem *new;
		new = (elem *) malloc(sizeof(head));
		*new = make_element(i);
		concatenate(&head, new);
	}
	print_list(head);

	return 0;
}
