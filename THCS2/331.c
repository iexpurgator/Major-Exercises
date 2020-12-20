#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
    {
        int tmp = i;
        int j = i + 1;
        for (; j <= m; ++j)
            if (j > i)
                printf("%c", j + 64);
        if (i >= m)
        {
            j = 0;
            tmp = m;
        }
        else
            j = m - i;
        for (; j < m; ++j, tmp--)
            printf("%c", tmp + 64);
        printf("\n");
    }
    return 0;
}