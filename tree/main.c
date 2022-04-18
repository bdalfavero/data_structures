#include <stdio.h>
#include "tree.h"

int main() {
	
	node *root = make_singleton(5);
	insert_value(root, 10);
	insert_value(root, 20);
	insert_value(root, 3);

	printf("tree values in order:\n");
	traverse(root);
	printf("\n");

	int search_val = 10;
	node *result = iter_search(root, search_val);
	printf("search result:\n");
	if (result != NULL) {
		printf("%d\n", result->key);
	} else {
		printf("node %d is not in tree!\n", search_val);
	}

	return 0;
}
