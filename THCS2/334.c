#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = 2 * n - 1;
    for (int i = 1; i <= n * 2; i += 2)
    {
        int k;
        for (int j = 1; j <= m; ++j)
        {
            if (j % 2 == 1 && i >= j)
            {
                printf("%c", j + 63);
                k = j;
            }
        }
        for (int j = k; j >= 1; --j)
        {
            if (j % 2 == 1 && i > j)
                printf("%c", j + 63);
        }
        printf("\n");
    }
}