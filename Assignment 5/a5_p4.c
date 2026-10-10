/*
CH-230-A
a5_p4.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] /= 5.0f;
    }
}

int main(void)
{
    int n;
    float *arr;
    printf("Enter the number of floating-point values: ");
    scanf("%d", &n);

    // Allocate memory for n floating-point values.
    arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        return 1;
    }
    printf("Enter floating-point values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Divide all elements by 5 using the required function.
    divby5(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
