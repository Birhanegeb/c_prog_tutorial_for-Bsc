#include <stdio.h>
int main() {
    char c = 'F';

    /* Using only arithmetic on the char value to move 3 letters
       forward in the alphabet ('F' -> 'I'). */
    char third = c + 3;

    printf("Character: %c\n", third);
    printf("ASCII code: %d\n", third);

    return 0;
}
