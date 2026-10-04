#include <stdio.h>
int main() {
    double result; /* The result of our calculation */

    /* The original line computed (3 + 1) / 5. Since 3, 1 and 5 are all
       ints, C performs integer division here: 4 / 5 truncates to 0,
       and assigning that integer 0 to a double just gives 0.000.
       Fix: make one of the operands a floating-point value (5.0) so
       the division is done in floating point instead of integer. */
    result = (3 + 1) / 5.0;

    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
