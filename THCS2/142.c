#include <stdio.h>
#define enter printf("\n")

int GT(int x)
{
    int gt = 1;
    for (int i = 1; i <= x; ++i)
        gt *= i;
    return gt;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < n - i; ++j)
            printf(" ");
        for (int j = 0; j <= i; ++j)
            printf("%d ", GT(i) / (GT(j) * GT(i - j)));
        enter;
    }
    return 0;
}