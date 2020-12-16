#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa(char s[])
{
    int l = (int)strlen(s);
    for (int i = 0; i < l; i++)
        if (s[i] >= '0' && s[i] <= '9')
            s[i] = ' ';
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            while (s[i + 1] == ' ')
            {
                for (int j = i; j < l; j++)
                    s[j] = s[j + 1];
            }
            if (i == 0)
                for (int j = 0; j < l; j++)
                    s[j] = s[j + 1];
        }
    }
}

void rutgon(char s[])
{
    int l = (int)strlen(s), x = 0, dem = 0;
    char ho[50];
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'A' && s[i] < 'Z')
            s[i] += 32;
        if (s[i] == ' ')
        {
            dem++;
            x = i;
        }
    }
    for (int j = 0; j < dem; j++)
        for (int i = j; i < x; i++)
        {
            if (i == 0)
            {
                ho[j] = s[i];
                break;
            }
            if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] < 'z')
            {
                ho[j] = s[i];
                break;
            }
        }
    ho[dem] = '\0';
    strcat(s, ho);
    for (int j = x; j >= 0; j--)
    {
        l = (int)strlen(s);
        for (int i = j; i < l; i++)
        {
            s[i - 1] = s[i];
        }
        s[strlen(s) - 1] = '\0';
    }
}
int main()
{
    char s[200], mail[13];
    gets(s);
    chuanhoa(s);
    rutgon(s);
    strcpy(mail, "@ptit.edu.vn");
    strcat(s, mail);
    puts(s);
    return 0;
}
