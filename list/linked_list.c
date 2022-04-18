#include <stdio.h>
#include "linked_list.h"

elem make_element(int value) {
	// make an element that points to NULL

	elem el;
	el.value = value;
	el.next_element = NULL;

	return el;
}

elem * tail(elem *head) {
	// return address of the last element in a list

	elem *cur_elem = head;

	while(1) {
		if (cur_elem->next_element == NULL) {
			break;
		}
		cur_elem = cur_elem->next_element;
	}

	return cur_elem;
}

void concatenate(elem *head1, elem *head2) {
	// concatenate list at head2 onto list at head1

	elem *h1_tail = tail(head1);
	h1_tail->next_element = head2;

	return;
}

void print_list(elem head) {

	elem cur_elem = head;
	while (1) {
		printf("%d ", cur_elem.value);
		if (cur_elem.next_element == NULL) {
			break;
		} else {
			cur_elem = *(cur_elem.next_element);
		}
	}

	printf("\n");

	return;
}
