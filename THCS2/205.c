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
        for (int j = 1; j <= n; j++)
            arr2[i][j] = k;
        k++;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i <= j)
    //             printf("%3d ", arr2[i][j]);
    //         else
    //             printf("\t");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i >= j)
                printf("%d", arr2[i][j]);
        printf("\n");
    }
}
