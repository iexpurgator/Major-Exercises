#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i + j < m)
                printf("%c", i + j + 64);
            else
                printf("%c", m - 1 + 64);
        }
        printf("\n");
    }
}