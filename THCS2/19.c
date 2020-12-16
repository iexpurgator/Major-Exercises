#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int GT(int x)
{
    int gt = 1;
    for (int i = 1; i <= x; ++i)
    {
        gt *= i;
    }
    return gt;
}

bool stronger(int x)
{
    int sum = 0, tmp = x;
    while (tmp > 0)
    {
        int y = tmp % 10;
        sum += GT(y);
        tmp /= 10;
    }
    if (sum == x)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; ++i)
    {
        if (stronger(i))
            printf("%d ", i);
    }
    return 0;
}
