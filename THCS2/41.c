#include <stdio.h>

int n, m, max;
int main()
{
    int Matrix[100][100] = {0}, Transpose[100][100] = {0}, SUM[100][100] = {0};

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &Matrix[i][j]);
    }
    //==============================
    if (m >= n)
        max = m;
    else
        max = n;
    //Chuyển vị;
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
            Transpose[j][i] = Matrix[i][j];
    }
    //Nhân ma trận;
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            for (int k = 0; k < max; k++)
                SUM[i][j] += Matrix[i][k] * Transpose[k][j];
        }
    }
    //==============================
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", SUM[i][j]);
        printf("\n");
    }
}
