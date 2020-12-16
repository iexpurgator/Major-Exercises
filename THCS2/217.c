#include <stdio.h>

int main()
{
    int n, k, x;
    int arr2[100][100];
    scanf("%d", &n);

    k = 1;
    x = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 != 0)
            {
                arr2[i][j] = k;
                k += 2;
            }
            else
            {
                arr2[i][j] = x;
                x += 2;
            }
        }
        k = 1;
        x = 2;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i >= j)
                printf("%d", arr2[i][j]);
        printf("\n");
    }
}
