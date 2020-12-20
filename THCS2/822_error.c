#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[200];
void chuanhoa()
{
    int l = (int)strlen(s);
    for (int i = 0; i < l; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    for (int i = 0; i < l; i++)
        if (s[i] > 'z' || s[i] < 'a')
            s[i] = ' ';
    while (s[l - 1] == ' ')
    {
        s[l - 1] = '\0';
        l--;
    }
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

void rutgon()
{
    int l = (int)strlen(s), x = 0, dem = 0;
    char ho[50], ten[100], mail[13];
    chuanhoa();
    for (int i = 0; i < l; i++)
    {
        // if (s[i] >= 'A' && s[i] < 'Z')
        //     s[i] += 32;
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
    for (int j = 0; j <= (l - x); j++)
    {
        for (int i = x + 1; i <= l; i++)
        {
            if (s[i] >= 'a' && s[i] < 'z')
            {
                ten[j] = s[i];
                x++;
                break;
            }
        }
    }
    ho[dem] = '\0';
    strcpy(mail, "@ptit.edu.vn");
    strcat(ho, ten);
    strcat(ho, mail);
    // for (int j = x; j >= 0; j--)
    // {
    //     l = (int)strlen(s);
    //     for (int i = j; i < l; i++)
    //         s[i - 1] = s[i];
    //     s[strlen(s) - 1] = '\0';
    // }
    puts(ho);
}
int main()
{
    gets(s);
    rutgon();
    return 0;
}
//      tRan  3 thi 4 THU huOnG 6 @ ]
