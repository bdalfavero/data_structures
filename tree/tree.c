#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

node * make_singleton(int key) {
	/* return pointer to a node
	** with no children, i.e. left and right
	** are null.  
	*/
	
	node *n_ptr = (node *) malloc(sizeof(node));
	n_ptr->key = key;
	return n_ptr;
}

void insert_node(node *root, node *new_node) {
	// insert node into the tree

	/* TODO: make me iterative! use a while loop,
	** and reassign current node of interest.
	*/

	if (new_node->key < root->key) {
		// we must insert to left!
		if (root->left == NULL) {
			// if there is a space on the left, put it there!
			root->left = new_node;
		} else {
			// else, try to insert at the node to the left.
			insert_node(root->left, new_node);
		}
	} else {
		// same situation on the right.
		if (root->right == NULL) {
			root->right = new_node;
		} else {
			insert_node(root->right, new_node);
		}
	}

return;
}

void insert_value(node *root, int value) {
	// insert the given integer value into the tree

	node *new_node = make_singleton(value);
	insert_node(root, new_node);

	return;
}

void traverse(node *root) {
	// traverse the tree, printing values in order

	// TODO: make me iterative!
	// try using a stack. If you want to visit a node later,
	// just put it on the stack and unitl it is time for that node.

	// recursively walk through the tree.
	// if the left is not empty, visit there first.
	// then print the value at the root.
	// then go to the right.
	if (root->left != NULL) {
		traverse(root->left);
	}

	printf("%d\t", root->key);
	if (root->left != NULL) {
		printf("%d\t", root->left->key);
	} else {
		printf("null\t");
	}
	if (root->right != NULL) {
		printf("%d\t", root->right->key);
	} else {
		printf("null\t");
	}
	printf("\n");
	
	if (root->right != NULL) {
		traverse(root->right);
	}

	return;
}

node * search(node *root, int value) {
	// search for a value in the tree

	if (root == NULL) {
		return NULL;
	} else if (root->key == value) {
		return root;
	} else if (value < root->key) {
		return search(root->left, value);
	} else {
		return search(root->right, value);
	}
}

node * iter_search(node *root, int value) {
	// search iteratively for a node

	node *cur_node = root;
	while (cur_node->key != value && cur_node != NULL) {
		if (cur_node->key < value) {
			cur_node = cur_node->left;
		} else {
			cur_node = cur_node->right;
		}
	}

	return cur_node;
}
