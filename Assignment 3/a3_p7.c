#include <stdio.h>

void print_form(int n, int m, char c) {
    int row, col, width;

    for (row = 0; row < n; row++) {
        width = m + row;
        for (col = 0; col < width; col++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    char c;

    printf("Enter n:\n");
    scanf("%d", &n);
    printf("Enter m:\n");
    scanf("%d", &m);
    printf("Enter character:\n");
    scanf(" %c", &c);

    print_form(n, m, c);

    return 0;
}
