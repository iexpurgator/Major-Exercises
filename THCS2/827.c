#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100], S[100];
    gets(s);
    strcpy(S, s);

    char *token = strtok(s, " ");
    char *up, *save = S;

    int dem;
    while (token != NULL)
    {
        dem = 0;
        up = strtok_r(save, " ", &save);
        for (int j = 0; j < strlen(up); ++j)
        {
            *(up + j) = toupper(*(up + j));
            if (*(up + j) == *(token + j))
                dem++;
        }
        if (dem == strlen(up))
            printf("%s ", token);
        token = strtok(NULL, " ");
    }
    return 0;
}