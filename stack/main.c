#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	
	stack stk;
	stk = *create_stack(15);

	push(&stk, 13);
	push(&stk, 52);
	swap(&stk);
	dup(&stk);

	print_stack(stk);

	return 0;
}
