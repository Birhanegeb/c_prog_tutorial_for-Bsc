#include <stdio.h>
#include <string.h>
#define MAX_LEN 80
void replaceAll(char *str, char c, char e);
int main(void)
{
    char str[MAX_LEN + 1];
    char c, e;
    while (1) {
        printf("Enter a string or 'stop' to quit: ");
        fgets(str, MAX_LEN + 1, stdin);
        str[strcspn(str, "\n")] = '\0';
        if (strcmp(str, "stop") == 0)
            break;
        printf("Enter character to replace: ");
        scanf(" %c", &c);
        printf("Enter replacing character: ");
        scanf(" %c", &e);
        getchar();
        printf("Character to replace: %c\n", c);
        printf("Replacing character: %c\n", e);
        printf("Before replacement: %s\n", str);
        replaceAll(str, c, e);
        printf("After replacement: %s\n", str);
    }
    return 0;
}
void replaceAll(char *str, char c, char e)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            str[i] = e;
    }
}