#include <bits/stdc++.h>
using namespace std;

int t, n, m, MAX;
int main()
{
    int Matrix1[100][100] = {0}, Matrix2[100][100] = {0}, SUM[100][100] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &Matrix1[i][j]);
            SUM[i][j] += Matrix1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &Matrix2[i][j]);
            SUM[i][j] -= Matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", SUM[i][j]);
        printf("\n");
    }
}