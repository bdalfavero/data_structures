// stack.h
// implementation of stack data struture

// define initial max size of stack
// we can always malloc more size when we initiate it
#define MAX_SIZE 128

typedef struct {
	int max_size;
	int cur_size;
	int *values;
} stack;

stack * create_stack(int max_size);

void push(stack * stk, int value);

int pop(stack * stk);

int peek(stack stk);

void print_stack(stack stk);

void swap(stack *stk);

void dup(stack *stk);
