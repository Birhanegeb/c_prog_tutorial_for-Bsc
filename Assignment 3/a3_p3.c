#include <stdio.h>
float convert(int cm) {
    return cm / 100000.0f; /* 1 km = 100000 cm */
}

int main() {
    int cm;

    printf("Enter length in cm:\n");
    scanf("%d", &cm);

    printf("Result of conversion: %f\n", convert(cm));

    return 0;
}
