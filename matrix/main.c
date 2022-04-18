#include <stdio.h>
#include "matvec.h"

int main() {

	vector *vec = new_vector(5);
	(vec->data)[3] = 1.37;
	print_vector(*vec);

	vector *vec2 = copy_vector(vec);
	(vec2->data)[0] = 7.31;
	print_vector(*vec2);

	free_vector(vec);
	free_vector(vec2);

	return 0;
}
