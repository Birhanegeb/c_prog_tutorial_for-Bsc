#include <stdio.h>
float to_pounds(int kg, int g) {
    return (kg + g / 1000.0f) * 2.2f;
}

int main() {
    int kg, g;

    printf("Enter kilograms:\n");
    scanf("%d", &kg);
    printf("Enter grams:\n");
    scanf("%d", &g);

    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}
