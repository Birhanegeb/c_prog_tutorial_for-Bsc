#include <stdio.h>
double sum25(double v[], int n) {
    /* Position 5 is only valid if the array has at least 6 elements.*/
    if (n <= 5) {
        printf("Positions 2 and 5 are not both valid in the array\n");
        return -111;
    }
    return v[2] + v[5];
}

int main() {
    double v[20];
    int n, i;

    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter value %d:\n", i + 1);
        scanf("%lf", &v[i]);
    }

    printf("sum=%f\n", sum25(v, n));

    return 0;
}
