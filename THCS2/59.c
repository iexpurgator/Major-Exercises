#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    char *tok = strtok(str, " ");
    while (tok != NULL)
    {
        printf("%s\n", tok);
        tok = strtok(NULL, " ");
    }
    return 0;
}