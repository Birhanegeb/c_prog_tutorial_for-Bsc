#include <stdio.h>
int main() {
    int result; /* The result of our calculation */

    result = (2 + 7) * 9 / 3;

    /* The printf call did not pass "result" as an argument for the
       %d format specifier, so printf read whatever garbage value
       happened to be next on the stack, producing a random-looking
       number. Fix: pass result as the argument to printf. */
    printf("The result is %d\n", result);
    return 0;
}
