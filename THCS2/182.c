#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (j < m - i)
                printf("%d", i + j + 1);
            else
                printf("%d", m);
        }
        printf("\n");
    }
    return 0;
}
