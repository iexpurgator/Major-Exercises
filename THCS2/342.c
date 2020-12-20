#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100], s1[20];
    int x = 0, y = 0, check[100] = {}, print[100] = {0};
    gets(s);
    gets(s1);

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

    token = strtok(s1, " ");
    int sz = (int)strlen(token);
    for (int i = 0; i < sz; ++i)
        *(token + i) = tolower(*(token + i));
    char *word2 = token;

    int dem = 0, loc = -1, key = 1;
    for (int j = 0; j < x; ++j)
    {
        int tu = 0;
        if (check[j] == 0 && strlen(word2) == strlen(word[j]))
        {
            for (int k = 0; k < strlen(word2); ++k)
                if (*(word2 + k) == *(word[j] + k))
                    tu++;
            if (tu == strlen(word2))
            {
                dem++;
                check[j] = key;
                loc = j;
            }
        }
        key++;
    }
    for (int k = 0; k < x; ++k)
        if (check[k] == 0 && print[k] == 0)
            printf("%s ", word[k]);
    return 0;
}