/*
CH-230-A
a5_p3.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
int count_lower(char *str)
{
    int count = 0;
    char *ptr = str;

    // Move the pointer through the string and count lowercase letters.
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main(void)
{
    char str[52];
    // Read strings until an empty line is entered.
    printf("Enter strings (press Enter to stop):\n");
    while (fgets(str, sizeof(str), stdin) != NULL) {
        if (str[0] == '\n' || str[0] == '\0') {
            break;
        }
        printf("Number of lowercase characters: %d\n", count_lower(str));
    }

    return 0;
}
