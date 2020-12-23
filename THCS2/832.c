#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, x = 1;
    int arr2[100][100];
    scanf("%d", &n);

    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            arr2[j][i] = x;
            x++;
        }
        k--;
    }

    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        k--;
        printf("\n");
    }
}
