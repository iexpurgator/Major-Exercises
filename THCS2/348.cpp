#include <bits/stdc++.h>
using namespace std;

int t, n, m, MAX;
int main()
{
    int Matrix1[100][100] = {0}, Matrix2[100][100] = {0}, SUM[100][100] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &Matrix1[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &Matrix2[i][j]);
    if (m >= n)
        MAX = m;
    else
        MAX = n;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            for (int k = 0; k < MAX; k++)
                SUM[i][j] += Matrix1[i][k] * Matrix2[k][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", SUM[i][j]);
        printf("\n");
    }
}