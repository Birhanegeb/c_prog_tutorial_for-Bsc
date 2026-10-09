#include <stdio.h>
#include <math.h>
#define MAX 15
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float lowest(float arr[], int num);
float sum(float arr[], int num);
int main(void)
{
    float arr[MAX];
    int n = 0;
    float x;
    char choice;
    printf("Enter up to 15 positive numbers.\n");
    printf("Enter a negative number to finish the input.\n");
    while (n < MAX && scanf("%f", &x) == 1 && x >= 0)
        arr[n++] = x;
    printf("Enter an operation:\n");
    printf("m - geometric mean\n");
    printf("h - highest number\n");
    printf("l - smallest number\n");
    printf("s - sum\n");
    scanf(" %c", &choice);
    switch (choice) {
    case 'm':
        printf("Geometric mean: %f\n", geometric_mean(arr, n));
        break;
    case 'h':
        printf("Highest: %f\n", highest(arr, n));
        break;
    case 'l':
        printf("Smallest: %f\n", lowest(arr, n));
        break;
    case 's':
        printf("Sum: %f\n", sum(arr, n));
        break;
    default:
        printf("Unknown option\n");
    }
    return 0;
}
float geometric_mean(float arr[], int num)
{
    float prod = 1;
    for (int i = 0; i < num; i++)
        prod *= arr[i];
    return powf(prod, 1.0f / num);
}
float highest(float arr[], int num)
{
    float max = arr[0];
    for (int i = 1; i < num; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
float lowest(float arr[], int num)
{
    float min = arr[0];
    for (int i = 1; i < num; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
float sum(float arr[], int num)
{
    float total = 0;
    for (int i = 0; i < num; i++)
        total += arr[i];
    return total;
}