#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100], min = 100, max = 0;
    gets(s);

    char *token = strtok(s, " ");
    char *longg, *shortt;

    while (token != NULL)
    {
        int sz = (int)strlen(token);
        if (sz > max)
        {
            longg = token;
            max = sz;
        }
        if (sz < min)
        {
            shortt = token;
            min = sz;
        }
        token = strtok(NULL, " ");
    }
    printf("%s %s\n", longg, shortt);
    return 0;
}