#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool NT(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, a[100][100] = {}, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
            if (i == j && NT(a[i][j]))
                dem++;
            if (j == n - i - 1 && j != i && NT(a[i][j]))
                dem++;
        }
    }
    printf("%d\n", dem);
    return 0;
}
