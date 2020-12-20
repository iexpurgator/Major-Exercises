#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    int x = 0, check[100] = {}, print[100] = {0};
    gets(s);

    char *token = strtok(s, " ");
    char *word[100];

    while (token != NULL)
    {
        int sz = (int)strlen(token);
        for (int i = 0; i < sz; ++i)
            *(token + i) = tolower(*(token + i));
        word[x++] = token;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < x; ++i)
    {
        check[i] = 1;
        int dem = 0;
        for (int j = i + 1; j < x; ++j)
        {
            int tu = 0;
            if (check[j] == 0 && strlen(word[i]) == strlen(word[j]))
            {
                for (int k = 0; k < strlen(word[i]); ++k)
                    if (*(word[i] + k) == *(word[j] + k))
                        tu++;
                if (tu == strlen(word[i]))
                {
                    dem++;
                    check[j] = 1;
                    print[j] = 1;
                }
            }
        }
        if (check[i] == 1 && print[i] == 0)
            printf("%s %d\n", word[i], dem + 1);
    }
    return 0;
}