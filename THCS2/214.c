#include <stdio.h>

int main()
{
    int n, k, x;
    int arr2[100][100];
    scanf("%d", &n);

    k = 1;
    x = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr2[i][j] = x;
            x++;
        }
        x = n - i - k;
        k++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i <= j)
                printf("%d", arr2[i][j]);
        printf("\n");
    }
}
