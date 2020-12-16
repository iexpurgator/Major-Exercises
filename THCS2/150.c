#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, k, x;
    int arr2[100][100];
    scanf("%d", &n);
    k = n;
    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         arr2[i][j] = 1;
    //     }
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == n)
                printf("*");
            else if (j == k || j == i || j == 1)
                printf("*");
            else
                printf(".");
        }
        // k--;
        printf("\n");
    }
}
