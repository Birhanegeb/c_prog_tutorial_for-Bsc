#include <stdio.h>
int main() {
    char ch;
    int n, i;

    printf("Enter a lowercase character:\n");
    scanf(" %c", &ch);

    printf("Enter an integer n:\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%c", ch - i);
        printf(",");
    }

    return 0;
}
