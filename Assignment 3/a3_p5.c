#include <stdio.h>
int main() {
    char c;
    int n, i;
    double temps[100];
    double sum = 0.0;

    printf("Enter a character:\n");
    scanf(" %c", &c);

    printf("Enter number of temperatures:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter temperature %d:\n", i + 1);
        scanf("%lf", &temps[i]);
        sum += temps[i];
    }

    switch (c) {
        case 's':
            printf("Sum: %f\n", sum);
            break;
        case 'p':
            for (i = 0; i < n; i++) {
                printf("%f\n", temps[i]);
            }
            break;
        case 't':
            for (i = 0; i < n; i++) {
                printf("%f\n", temps[i] * 9.0 / 5.0 + 32.0);
            }
            break;
        default:
            printf("Average: %f\n", sum / n);
            break;
    }

    return 0;
}
