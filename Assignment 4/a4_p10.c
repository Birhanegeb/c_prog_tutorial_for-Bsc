#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div,
                   float *pwr, float *invb);
int main(void)
{
    float a, b, prod, div, pwr, invb;

    printf("Enter a and b (b != 0): ");
    scanf("%f %f", &a, &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("Product: %f\n", prod);
    printf("Division: %f\n", div);
    printf("a^b: %f\n", pwr);
    printf("1/b: %f\n", invb);

    return 0;
}

/* results are returned through the pointer parameters */
void proddivpowinv(float a, float b, float *prod, float *div,
                   float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = powf(a, b);
    *invb = 1 / b;
}
