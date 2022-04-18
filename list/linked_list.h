// linked_list.h
// linked list implementation

struct element {
	int value; // the value of the current list element
	struct element* next_element; // pointer to the next list element
};
typedef struct element elem;

elem make_element(int value);

elem * tail(elem *head);

void concatenate(elem *head1, elem *head2);

void print_list(elem head);
