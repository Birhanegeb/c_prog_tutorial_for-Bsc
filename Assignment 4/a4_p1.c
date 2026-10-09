#include <stdio.h>
#define PI 3.14159265358979
int main(void)
{
    double lower, upper, step;
   printf("Enter lower: ");
   scanf("%lf", &lower);
   printf("Enter upper: ");
   scanf("%lf", &upper);
   printf("Enter step: ");
   scanf("%lf", &step);
   for (double x = lower; x <= upper; x += step)
        printf("%f %f %f\n", x, PI * x * x, 2 * PI * x);

    return 0;
}
