/*
CH-230-A
a5_p11.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/

#include <stdio.h>

int is_prime_recursive(int x, int divisor)
{
    // Numbers below 2 are not prime.
    if (x < 2) {
        return 0;
    }

    if (divisor > x / divisor) {
        return 1;
    }

    // If a divisor is found, the number is not prime.
    if (x % divisor == 0) {
        return 0;
    }

    return is_prime_recursive(x, divisor + 1);
}

int is_prime(int x)
{
    return is_prime_recursive(x, 2);
}

int main(void)
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // Use the recursive function to determine whether x is prime.
    if (is_prime(x)) {
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }

    return 0;
}
