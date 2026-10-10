/*
CH-230-A
a5_p8.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
/* Dynamically allocate a matrix with the given number of rows and columns. */
int **allocate_matrix(int rows, int cols)
{
    int **matrix = malloc((size_t)rows * sizeof(*matrix));
    if (matrix == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc((size_t)cols * sizeof(*matrix[i]));
        if (matrix[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}
/* Free all memory allocated for the matrix. */
void free_matrix(int **matrix, int rows)
{
    if (matrix != NULL) {
        for (int i = 0; i < rows; i++) {
            free(matrix[i]);
        }
        free(matrix);
    }
}

/* Read all elements of a matrix from the input. */
void read_matrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Print the elements of a matrix row by row. */
void print_matrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);

            if (j < cols - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/* Calculate the product of matrices A and B and store it in C. */
void multiply_matrices(int **a, int **b, int **c, int n, int m, int p)
{
    // Each result element is calculated by multiplying a row of A with a column of B.
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < p; k++) {
            c[i][k] = 0;

            for (int j = 0; j < m; j++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
}

int main(void)
{
    int n;
    int m;
    int p;
    int **a;
    int **b;
    int **c;

    /* Read the three dimensions n, m and p. */
    scanf("%d %d %d", &n, &m, &p);

    a = allocate_matrix(n, m);
    b = allocate_matrix(m, p);
    c = allocate_matrix(n, p);

    if (a == NULL || b == NULL || c == NULL) {
        free_matrix(a, n);
        free_matrix(b, m);
        free_matrix(c, n);
        return 1;
    }

    // Read both input matrices before calculating their product.
    read_matrix(a, n, m);
    read_matrix(b, m, p);

    multiply_matrices(a, b, c, n, m, p);

    printf("Matrix A:\n");
    print_matrix(a, n, m);

    printf("Matrix B:\n");
    print_matrix(b, m, p);

    printf("The multiplication result AxB:\n");
    print_matrix(c, n, p);

    /* Release the memory used by all three matrices. */
    free_matrix(a, n);
    free_matrix(b, m);
    free_matrix(c, n);

    return 0;
}
