/*
CH-230-A
a5_p7.c
Abel Beyene Gebreselase
agebreselase@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str1[101];
    char str2[101];
    char *result;
    size_t len1;
    size_t len2;
    printf("enter the strings to concatenate\n");
    if (fgets(str1, sizeof(str1), stdin) == NULL ||
        fgets(str2, sizeof(str2), stdin) == NULL) {
        return 1;
    }
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Allocate exactly enough space for both strings and the null character.
    len1 = strlen(str1);
    len2 = strlen(str2);
    result = malloc(len1 + len2 + 1);
    if (result == NULL) {
        return 1;
    }

    // Copy the two strings into the newly allocated result.
    memcpy(result, str1, len1);
    memcpy(result + len1, str2, len2 + 1);
    printf("Result of concatenation: %s\n", result);
    free(result);
    return 0;
}
