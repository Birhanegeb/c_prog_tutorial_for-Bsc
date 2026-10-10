/*
CH-230-A
a5_p2.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
void divby5(float arr[], int size)/* Divide every element of the array by 5. */
{
    for (int i = 0; i < size; i++) {
        arr[i] /= 5.0f;
    }
}

int main(void)
{
    /* The array contains the values given*/
    float arr[] = {5.5f, 6.5f, 7.75f, 8.0f, 9.6f, 10.36f};
    int size = (int)(sizeof(arr) / sizeof(arr[0]));

    /* Print the array before dividing its elements. */
    printf("Before:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    divby5(arr, size);

    /* Print the array after dividing its elements by 5. */
    printf("After:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}