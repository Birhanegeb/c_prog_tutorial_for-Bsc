/*
CH-230-A
a5_p1.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/

#include <stdio.h>
void print_triangle(int n, char ch)
{
    // Print one shorter row after each iteration.
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main(void)
{
    int n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the character: ");
    scanf(" %c", &ch);
    print_triangle(n, ch);
    return 0;
}
