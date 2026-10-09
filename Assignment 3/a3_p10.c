#include <stdio.h>
float product(float a, float b) {
    return a * b;
}

void productbyref(float a, float b, float *p) {
    *p = a * b;
}

void modifybyref(float *a, float *b) {
    *a = *a + 3;
    *b = *b + 11;
}

int main() {
    float a, b, result;

    printf("Enter first float:\n");
    scanf("%f", &a);
    printf("Enter second float:\n");
    scanf("%f", &b);
    result = product(a, b);
    printf("product() result: %f\n", result);
    productbyref(a, b, &result);
    printf("productbyref() result: %f\n", result);

    /* product() and productbyref() give the same numeric result,
       just returned in different ways (by value vs. through a
       pointer parameter). */

    modifybyref(&a, &b);
    printf("After modifybyref: a=%f, b=%f\n", a, b);
    /* modifybyref changes a and b themselves (by reference), adding
       3 to a and 11 to b, so the caller's original variables change. */
    return 0;
}
