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
    int n, i = 2;
    scanf("%d", &n);
    int tmp = n;
    while (tmp > 1 && i < n)
    {
        if (NT(i) && tmp % i == 0)
        {
            printf("%d ", i);
            tmp /= i;
        }
        else
            i++;
        if (NT(tmp))
        {
            printf("%d", tmp);
            tmp = 0;
        }
    }
    return 0;
}
