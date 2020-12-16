#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; ++i)
    {
        int x = i + 1;
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