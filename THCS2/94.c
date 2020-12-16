#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

bool NT(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int a, r[100][100], dem = 0, check[100] = {0};
    scanf("%d", &a);
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            scanf("%d", &r[i][j]);
            if (i == j && NT(r[i][j]) && check[r[i][j]] == 0)
            {
                check[r[i][j]] = 1;
                dem++;
            }
            if (j == a - i - 1 && j != i && NT(r[i][j]) && check[r[i][j]] == 0)
            {
                check[r[i][j]] = 1;
                dem++;
            }
        }
    }
    printf("%d\n", dem);
    return 0;
}
/*
5
2  1  3  4  4
5  6  7  8  8
9  10 11 12 11
13 14 15 16 16
2  7  12 16 3
*/
