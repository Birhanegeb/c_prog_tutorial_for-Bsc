/*
CH-230-A
a5_p5.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/

#include <stdio.h>
#include <stdlib.h>
#define EPSILON 1e-12
double scalar_product(const double v[], const double w[], int n)
{
    double result = 0.0;

    // Multiply corresponding components and add the products.
    for (int i = 0; i < n; i++) {
        result += v[i] * w[i];
    }

    return result;
}

void print_smallest(const double arr[], int n)
{
    int position = 0;
    double smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest - EPSILON) {
            smallest = arr[i];
            position = i;
        }
    }

    printf("The smallest = %.6f\n", smallest);
    printf("Position of smallest = %d\n", position);
}

void print_largest(const double arr[], int n)
{
    int position = 0;
    double largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest + EPSILON) {
            largest = arr[i];
            position = i;
        }
    }

    printf("The largest = %.6f\n", largest);
    printf("Position of largest = %d\n", position);
}

int main(void)
{
    int n;
    double *v;
    double *w;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    v = malloc((size_t)n * sizeof(*v));
    w = malloc((size_t)n * sizeof(*w));

    if (v == NULL || w == NULL) {
        free(v);
        free(w);
        return 1;
    }

    printf("Enter elements for vector v:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    printf("Enter elements for vector w:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }

    // Print the scalar product and the extreme values of both vectors.
    printf("Scalar product=%.6f\n", scalar_product(v, w, n));
    print_smallest(v, n);
    print_largest(v, n);
    print_smallest(w, n);
    print_largest(w, n);

    free(v);
    free(w);

    return 0;
}
