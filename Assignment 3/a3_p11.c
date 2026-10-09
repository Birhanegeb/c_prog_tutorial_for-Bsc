#include <stdio.h>
#include <string.h>
int main() {
    char one[100], two[100], third[100];
    char c;
    char *pos;

    printf("Enter first string:\n");
    fgets(one, sizeof(one), stdin);
    one[strcspn(one, "\n")] = '\0';

    printf("Enter second string:\n");
    fgets(two, sizeof(two), stdin);
    two[strcspn(two, "\n")] = '\0';

    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));

    printf("concatenation=%s%s\n", one, two);

    strcpy(third, two);
    printf("copy=%s\n", third);

    if (strcmp(one, two) < 0) {
        printf("one is smaller than two\n");
    } else if (strcmp(one, two) > 0) {
        printf("one is greater than two\n");
    } else {
        printf("one and two are equal\n");
    }

    printf("Enter a character to search for in two:\n");
    scanf(" %c", &c);

    pos = strchr(two, c);
    if (pos != NULL) {
        printf("position=%ld\n", pos - two);
    } else {
        printf("Character not found\n");
    }

    return 0;
}
