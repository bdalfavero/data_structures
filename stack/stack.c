#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

stack * create_stack(int max_size) {
	// return a pointer to a new stack object

	stack *stk;
	stk = (stack *) malloc(sizeof(stack));
	stk->max_size = max_size;

	// size the array so that there are stk.max_size ints in stk
	stk->values = (int *) malloc(stk->max_size * sizeof(int));

	for (int i = 0; i < stk->max_size; i++) {
		stk->values[i] = 0;
	}

	stk->cur_size = -1;

	return stk;
}

void push(stack * stk, int value) {
	// pop a value onto the stack

	/*
	we can't push anything onto a full stack. 
	warn the user! 
	*/
	if (stk->cur_size == stk->max_size) {
		fprintf(stderr, "pushed to a full stack!!\n");
		exit(-1);
	}

	stk->cur_size += 1;
	stk->values[stk->cur_size] = value;

	return;
}

int pop(stack * stk) {
	// pop the top value off the stack and return it
	
	/*
	we can't pop from an empty stack,
	which is when stk.cur_size = -1.
	give the user a warning!
	*/
	if (stk->cur_size < 0) {
		fprintf(stderr, "popped from empty stack!!\n");
		exit(-1);
	}

	int val = stk->values[stk->cur_size];
	stk->values[stk->cur_size] = 0;
	stk->cur_size -= 1;

	return val;
}

int peek(stack stk) {
	// return the current top value without popping
	
	if (stk.cur_size < 0) {
		return 0;
	} else {
		return stk.values[stk.cur_size];
	}
}

void print_stack(stack stk) {
	// print every value in the stack

	for (int i = 0; i < stk.max_size; i++) {
		printf("%d ", stk.values[i]);
	}
	printf("\n");

	return;
}

void swap(stack *stk) {
	// swap the top two elements on the stack

	int temp1 = pop(stk);
	int temp2 = pop(stk);
	push(stk, temp1);
	push(stk, temp2);

	return;
}

void dup(stack *stk) {
	// duplicate the item on top of the stack

	push(stk, peek(*stk));

	return;
}
