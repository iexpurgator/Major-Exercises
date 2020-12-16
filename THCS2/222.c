#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, x;
    int arr2[100][100];
    scanf("%d", &n);

    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            arr2[i][j] = k;
            k++;
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
