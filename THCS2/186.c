#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int x;
    if (n < m)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = m; j >= 1; --j)
            {
                if (i <= j)
                {
                    x = j - i + 1;
                    printf("%d", x);
                }
                else
                    printf("%d", ++x);
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = n; i >= 1; --i)
        {
            x = i + 1;
            for (int j = 1; j <= m; ++j)
            {
                if (j > i)
                    printf("%d", ++x);
                else
                    printf("%d", --x);
            }
            printf("\n");
        }
    }
}