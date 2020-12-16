#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0, k = 0, h = 0; i < n; ++i, ++k)
    {
        for (int j = i + 1; j <= m; ++j)
            if (j > k)
                printf("%d", j);
        if (i >= m)
        {
            printf("%d", k + 1);
            h = m - 1;
        }
        else
            h = i;
        for (int j = 1, tmp = h; j <= h; ++j, tmp--)
            printf("%d", tmp);
        printf("\n");
    }
    return 0;
}
