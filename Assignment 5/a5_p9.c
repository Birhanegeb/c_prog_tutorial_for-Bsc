/*
CH-230-A
a5_p9.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>

int ***allocate_3d(int rows, int cols, int depth)
{
    int ***array = malloc((size_t)rows * sizeof(*array));
    if (array == NULL) {
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        array[i] = malloc((size_t)cols * sizeof(*array[i]));
        if (array[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(array[j]);
            }
            free(array);
            return NULL;
        }

        for (int j = 0; j < cols; j++) {
            array[i][j] = malloc((size_t)depth * sizeof(*array[i][j]));
            if (array[i][j] == NULL) {
                for (int k = 0; k < j; k++) {
                    free(array[i][k]);
                }
                free(array[i]);
                for (int k = 0; k < i; k++) {
                    for (int l = 0; l < cols; l++) {
                        free(array[k][l]);
                    }
                    free(array[k]);
                }
                free(array);
                return NULL;
            }
        }
    }

    return array;
}

void free_3d(int ***array, int rows, int cols)
{
    if (array == NULL) {
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);
}

void read_3d(int ***array, int rows, int cols, int depth)
{
    // Read the array in row, column, depth order as required.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

void print_sections(int ***array, int rows, int cols, int depth)
{
    // Each depth value represents one section parallel to the XOY axis.
    for (int k = 0; k < depth; k++) {
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d", array[i][j][k]);
                if (j < cols - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void)
{
    int rows;
    int cols;
    int depth;
    int ***array;

    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &depth);

    array = allocate_3d(rows, cols, depth);
    if (array == NULL) {
        return 1;
    }

    read_3d(array, rows, cols, depth);
    print_sections(array, rows, cols, depth);
    free_3d(array, rows, cols);
    return 0;
}
