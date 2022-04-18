// matvec.c
// function definitions for matrices and vectors

#include <stdio.h>
#include <stdlib.h>
#include "matvec.h"

vector * new_vector(int size) {
	// allocate a new vector in memory
	// and set all elements to zero

	vector *vec = malloc(sizeof(vector));
	vec->size = size;
	vec->data = malloc(size * sizeof(float));

	for (int i = 0; i < size; i++) {
		*(vec->data + i) = 0.0;
	}

	return vec;
}

void free_vector(vector *vec) {
	// delete a vector from memory

	// we must free the data in the vector first!
	free(vec->data);
	// now we can free the vector struct itself.
	free(vec);

	return;
}

vector * copy_vector(vector *vec) {
	// make a copy of a vector at a new location

	vector *new_vec = new_vector(vec->size);
	for (int i = 0; i < vec->size; i++) {
		(new_vec->data)[i] = (vec->data)[i];
	}

	return new_vec;
}

matrix * new_matrix(int rows, int cols) {
	// allocate a new matrix

	matrix *mat = malloc(sizeof(matrix));
	mat->rows = rows;
	mat->columns = cols;
	mat->data = malloc(rows * cols * sizeof(float));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			(mat->data)[i * cols + j] = 0.0;
		}
	}

	return mat;
}

void free_matrix(matrix *mat) {
	// delete a matrix from memory

	free(mat->data);
	free(mat);

	return;
}

void print_vector(vector vec) {
	// print vector in a row

	for (int i = 0; i < vec.size; i++) {
		printf("%f ", vec.data[i]);
	}
	printf("\n");

	return;
}

void print_matrix(matrix mat) {
	// print a matrix, a row at a time

	for (int i = 0; i < mat.rows; i++) {
		for (int j = 0; j < mat.columns; j++) {
			printf("%f ", mat.data[i * mat.columns + j]);
		}
		printf("\n");
	}

	return;
}
