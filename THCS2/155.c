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
    //     {
    //         printf("~");
    //     }
    //     for (int j = 1; j <= k; j++)
    //     {
    //         if (i == 1)
    //             printf("*");
    //         else if (j == k || j == 1)
    //             printf("*");
    //         // else if (j == k || j == i || j == 1)
    //         //     printf("*");
    //         else
    //             printf(".");
    //     }
    //     k--;
    //     printf("\n");
    // }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - k; j++)
        {
            printf("~");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k--;
        // k++;
        printf("\n");
    }
}
