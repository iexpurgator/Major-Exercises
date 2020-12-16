#include <stdio.h>

int main()
{
    int n, x, n1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        x = i;
        n1 = n - 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x = x + n1;
            n1--;
        }
        printf("\n");
    }
}
