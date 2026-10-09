#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void print_two_greatest(int *arr, int n);

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

    print_two_greatest(arr, n);

    free(arr);
    return 0;
}

/* finds the two greatest values in a single pass, without sorting */
void print_two_greatest(int *arr, int n)
{
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            second = arr[i];
        }
    }

    printf("Greatest: %d\nSecond greatest: %d\n", first, second);
}
