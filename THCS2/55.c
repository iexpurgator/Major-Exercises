#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool so(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

bool chu(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}

int main()
{
    int dem_so = 0, dem_chu = 0;
    char s[100];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; ++i)
    {
        if (so(s[i]))
            dem_so++;
        if (chu(s[i]))
            dem_chu++;
    }
    printf("%d %d %d", dem_so, dem_chu, len - dem_chu - dem_so);
    return 0;
}