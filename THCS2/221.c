#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, k, x;
    int arr2[100][100];
    scanf("%d", &n);
    x = 1;
    k = 2;
    m = n + n - 1;

    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <= n; j++)
    //         arr2[i][j] = 1;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
            printf("~");
        for (j = 1; j <= x; j++)
        {
            if (i > j)
            {
                printf("%d", k);
                k += 2;
            }
            else if (i == j)
            {
                printf("%d", k);
                // k--;
            }
            else
            {
                k -= 2;
                printf("%d", k);
            }
        }
        k = 2;
        x += 2;
        printf("\n");
    }
}
