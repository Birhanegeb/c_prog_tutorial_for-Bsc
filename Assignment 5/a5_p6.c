/*
CH-230-A
a5_p6.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int main(void)
{
    int n;
    float *arr;
    float *ptr;
    float *end;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        return 1;
    }
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    ptr = arr;
    end = arr;
    while (end < arr + n && *end >= 0.0f) {  // Move the pointer until the first negative value is found.

        end++;
    }
    printf("Before the first negative value: %td elements\n", end - ptr);
    free(arr);
    return 0;
}
