#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
        for (int j = 1; j < i; ++j)
        {
            if (NT(j))
            {
                if (i % j == 0 && i % (j * j) == 0)
                {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
    return 0;
}