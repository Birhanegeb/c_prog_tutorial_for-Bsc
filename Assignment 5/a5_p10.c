/*
CH-230-A
a5_p10.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
void print_countdown(int n)
{
    // Stop the recursion after printing 1.
    if (n <= 0) {
        return;
    }
    printf("%d", n);
    if (n > 1) {
        printf(" ");
    }
    print_countdown(n - 1);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Recursively print n, n-1, ..., 1.
    print_countdown(n);
    printf("\n");
    return 0;
}
