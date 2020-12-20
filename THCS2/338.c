#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a, b, r[100][100], c, d;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            scanf("%d", &r[i][j]);
    scanf("%d%d", &c, &d);
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            int x = i;
            if (i == c - 1)
                x = d - 1;
            if (i == d - 1)
                x = c - 1;
            printf("%d ", r[x][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
3 3
1 2 3
4 5 6
7 8 9
1 3
*/