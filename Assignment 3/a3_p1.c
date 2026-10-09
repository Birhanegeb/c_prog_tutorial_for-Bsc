#include <stdio.h>
int main() {
    float x;
    int n, i;
    char input[100];
    char extra;

    printf("Enter a float value:\n");
    scanf("%f", &x);
    getchar();

    printf("Enter an integer n:\n");
    fgets(input, sizeof(input), stdin);

    while (sscanf(input, "%d %c", &n, &extra) != 1 || n <= 0) {
        printf("Input is invalid, reenter value\n");
        fgets(input, sizeof(input), stdin);
    }

    for (i = 0; i < n; i++) {
        printf("%f\n", x);
    }

    return 0;
}
