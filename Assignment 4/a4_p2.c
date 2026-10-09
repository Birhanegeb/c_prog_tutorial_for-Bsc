#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[51];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 != 0){
            printf(" ");
        }
        printf("%c\n", str[i]);
    }

    return 0;
}
