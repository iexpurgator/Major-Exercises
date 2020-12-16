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
    int n, a[10000] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int j;
        scanf("%d", &j);
        if (NT(j))
            a[j]++;
    }
    for (int i = 0; i < 10000; ++i)
    {
        if (a[i] != 0)
            printf("%d %d\n", i, a[i]);
    }
}
