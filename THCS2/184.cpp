#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0, k = 0; i < n; ++i, ++k)
    {
        int tmp = i + 1;
        for (int j = i + 1; j <= m; ++j)
        {
            if (j > k)
            {
                printf("%d", j);
                tmp = j - 1;
            }
        }
        int j;
        if (i > m)
            j = 0;
        else
            j = m - i;
        for (; j < m; ++j, tmp--)
            printf("%d", tmp);
        printf("\n");
    }
    return 0;
}
