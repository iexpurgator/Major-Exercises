#include <cstdio>
#include <math.h>

bool NT(int n)
{
    if (n == 2)
        return true;
    if (n < 2 || n % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 2;
    while (n != 1)
    {
        if (n % i == 0 && NT(i))
        {
            printf("%d", i);
            n /= i;
            if (n > 1)
                printf("x");
        }
        else
            i++;
    }
    return 0;
}