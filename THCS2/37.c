#include <stdio.h>

int main()
{
    int n, m, a[100][100], sHang, sCot, x, y, maxH = -1, maxC = -1;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; ++i)
    {
        sHang = 0;
        for (int j = 0; j < m; ++j)
        {
            sHang += a[i][j];
        }
        if (sHang > maxH)
        {
            maxH = sHang;
            x = i;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        sCot = 0;
        for (int j = 0; j < n; ++j)
        {
            sCot += a[j][i];
        }
        if (sCot > maxC)
        {
            maxC = sCot;
            y = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i != x && j != y)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
