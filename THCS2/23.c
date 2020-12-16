#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool NT(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n, a[100][100], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
            if (NT(a[i][j]))
                sum += a[i][j];
    }
    printf("%d", sum);
    return 0;
}
