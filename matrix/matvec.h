// matvec.h
// definitions for matrix and vector types/functions

typedef struct {
	int size;
	float *data;
} vector;

typedef struct {
	int rows;
	int columns;
	float *data;
} matrix;

vector * new_vector(int size);

void free_vector(vector *vec);

vector * copy_vector(vector *vec);

matrix * new_matrix(int rows, int cols);

void free_matrix(matrix *mat);

void print_vector(vector vec);

void print_matrix(matrix mat);
