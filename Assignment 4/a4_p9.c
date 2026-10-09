#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main(void)
{
    int n;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Product of smallest and largest: %d\n", prodminmax(arr, n));
    free(arr);
    return 0;
}

int prodminmax(int arr[], int n)
{
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    return min * max;
}
