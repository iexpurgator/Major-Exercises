#include <stdio.h>
#include <math.h>

int main()
{
    int n, k = 1;
    int arr2[100][100];
    scanf("%d", &n);
    //ihang    jcot
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            for (k = 1; k <= n; k++)
                arr2[i][k] = i + (k - 1) * n - ((k - 1) * k) / 2;
                /*
                arr2[i][1] = i;
                arr2[i][2] = i+n-1;
                arr2[i][3] = i+n-1+n-2;
                arr2[i][4] = i+n-1+n-2+n-3;
                arr2[i][5] = i+n-1+n-2+n-3+n-4;
                */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", arr2[i][j]);
        printf("\n");
    }
}
