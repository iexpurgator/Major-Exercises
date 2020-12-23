#include <stdio.h>
#include <math.h>
//833
/*
1   2   4   7  11
    3   5   8  12
        6   9  13
           10  14
               15
 */
int main()
{
    int n, k, x = 1;
    int arr2[100][100];
    scanf("%d", &n);

    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            arr2[j][i] = x;
            x++;
        }
        k++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
                printf("%3d ", arr2[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
}
//    k=1;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            printf("%d ",arr2[i][j]);
//        }
//        k++;
//        printf("\n");
//    }
