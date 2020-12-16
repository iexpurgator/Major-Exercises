#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = 2 * n - 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
            printf("%d", n - j);
        for (int j = 0; j < n - i; ++j)
            printf("%d", n - i);
        for (int j = n; j < m - i; ++j)
            printf("%d", 2 * n - n - i);
        for (int j = i - 1; j >= 0; --j)
            printf("%d", n - j);
        printf("\n");
    }
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
            printf("%d", n - j);
        for (int j = 0; j < n - i; ++j)
            printf("%d", n - i);
        for (int j = n; j < m - i; ++j)
            printf("%d", 2 * n - n - i);
        for (int j = i - 1; j >= 0; --j)
            printf("%d", n - j);
        printf("\n");
    }
    return 0;
}