#include <stdio.h>
#include <stdbool.h>

bool sUC(int x)
{
    int sum = 0;
    for (int i = 1; i <= x / 2; ++i)
    {
        if (x % i == 0)
            sum += i;
        if (sum > x)
            return false;
    }
    if (sum == x)
        return true;
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
        if (sUC(i))
            printf("%d ", i);
    }
    return 0;
}
