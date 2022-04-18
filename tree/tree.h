// tree.h
// definition of binary search tree and all functions

/*
 * Define a node that is attached to two other nodes,
 * one to the left and the other to the right. 
 * The node is associated with an integer value.
 * In a BST, the left node is < the current node, and
 * the right node is > the current node.
 */
typedef struct tnode {
	int key;
	struct tnode *left;
	struct tnode *right;
} node;

node * make_singleton(int key);

void insert_node(node *root, node *new_node);

void insert_value(node *root, int val);

void traverse(node *root);

node * search(node *root, int value);

node * iter_search(node *root, int value);
