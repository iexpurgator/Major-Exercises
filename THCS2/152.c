#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("~");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == n || i == 1)
                printf("*");
            else if (j == i || j == 1)
                printf("*");
            else
                printf(".");
        }
        // k--;
        printf("\n");
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf("~");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     // k--;
    //     // k++;
    //     printf("\n");
    // }
}
