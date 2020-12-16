#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - k; j++)
    //         printf("~");
    //     for (int j = 1; j <= 2 * k - 1; j++)
    //     {
    //         if (i == n || i == 1)
    //             printf("*");
    //         else if (j == 2 * k - 1 || j == 1)
    //             printf("*");
    //         else
    //             printf(".");
    //     }
    //     k--;
    //     printf("\n");
    // }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            printf("*");
        for (int j = 1; j <= 2 * i - 2; j++)
            printf("~");
        for (int j = 1; j <= n - i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - k + 1; j++)
            printf("*");
        for (int j = 1; j <= 2 * k - 2; j++)
            printf("~");
        for (int j = 1; j <= n - k + 1; j++)
            printf("*");
        k--;
        printf("\n");
    }
}
