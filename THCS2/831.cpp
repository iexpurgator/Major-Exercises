#include <cstdio>
#include <math.h>

bool NT(int *n)
{
    if (*n < 2)
        return false;
    if (*n == 2)
        return true;
    if (*n % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(*n); ++i)
    {
        if (*n % i == 0)
            return false;
    }
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
        //        printf("%d ", i);
        int dem = 0, check = 0;
        for (int j = 2; j < i; ++j)
        {
            if (NT(&j) && i % j == 0)
            {
                if (i % (j * j) != 0)
                    check++;
                dem++;
            }
        }
        if (dem != 0 && check == 0)
            printf("%d ", i);
    }
    return 0;
}
