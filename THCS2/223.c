#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, x;
    int arr2[100][100];
    scanf("%d", &n);
    int tmp = 2;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                arr2[i][j] = k;
                k++;
            }
            else
            {
                if (j == 1)
                    x = i;
                arr2[i][j] = x;
                x--;
                if (i == j)
                    k = 1;
            }
            tmp++;
            // k++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i >= j)
                printf("%d", arr2[i][j]);
        printf("\n");
    }
    // k = 1;
    // // x = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", k);
    //         k++;
    //     }
    //     // k = x + i;
    //     // x += i;
    //     printf("\n");
    // }
}
