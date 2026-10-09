#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 50
int count_insensitive(char *str, char c);
int main(void)
{
    char chars[] = {'b', 'H', '8', 'u', '$'};
    char *tmp, *str;

    /* read into a temporary buffer of maximal length */
    tmp = malloc(MAX_LEN + 2);
    if (tmp == NULL)
        return 1;

    printf("Enter a string (max %d characters): ", MAX_LEN);
    fgets(tmp, MAX_LEN + 2, stdin);
    tmp[strcspn(tmp, "\n")] = '\0';

    /* copy into a string of exactly the right size, then free the buffer */
    str = malloc(strlen(tmp) + 1);
    if (str == NULL) {
        free(tmp);
        return 1;
    }

    strcpy(str, tmp);
    free(tmp);

    for (int i = 0; i < 5; i++) {
        int count = count_insensitive(str, chars[i]);

        if (count > 0)
            printf("The character '%c' occurs %d times.\n",
                   chars[i], count);
    }

    free(str);

    return 0;
}

/* counts occurrences of c in str, ignoring case */
int count_insensitive(char *str, char c)
{
    int count = 0;

    for (; *str != '\0'; str++) {
        if (tolower((unsigned char)*str) ==
            tolower((unsigned char)c))
            count++;
    }

    return count;
}