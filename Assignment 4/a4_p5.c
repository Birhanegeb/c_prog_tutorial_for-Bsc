#include <stdio.h>
#include <ctype.h>

int count_consonants(char str[]);

int main(void)
{
    char str[102];
    printf("Enter lines of text (empty line to stop):\n");
    while (fgets(str, sizeof(str), stdin) != NULL && str[0] != '\n')
        printf("Number of consonants=%d\n", count_consonants(str));

    return 0;
}

int count_consonants(char str[])
{
    int count = 0;

    for (char *p = str; *p != '\0'; p++) {
        char c = tolower((unsigned char)*p);
        if (isalpha((unsigned char)c) && c != 'a' && c != 'e' &&
            c != 'i' && c != 'o' && c != 'u')
            count++;
    }

    return count;
}
