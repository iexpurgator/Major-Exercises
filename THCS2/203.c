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
    int n, dem, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        if (NT(i))
        {
            int tmp = i, dk;
            max = i % 10;
            while (tmp > 0)
            {
                dk = 0;
                tmp /= 10;
                if (tmp % 10 > max)
                    break;
                dk = 1;
            }
            if (dk)
            {
                dem++;
                printf("%d ", i);
            }
        }
    }
    printf("\n%d\n", dem);
}
