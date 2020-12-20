#include <stdio.h>

int main()
{
    int n, a[100][100], sTren = 0, sDuoi = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j < i)
                sDuoi += a[i][j];
            if (j > i)
                sTren += a[i][j];
        }
    }
    printf("%d %d", sTren, sDuoi);
}
