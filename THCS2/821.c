#include <stdio.h>
#include <math.h>

int NT(int x)
{
    if (x == 2)
        return 1;
    if (x < 2 || x % 2 == 0)
        return 0;
    for (int i = 2; i < sqrt(x); ++i)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, a[100][100], s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j != i && n - j - 1 != i)
                continue;
            if (NT(a[i][j]) == 1)
                s += a[i][j];
        }
    }
    printf("%d", s);
}
