#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a, r[100][100];
    scanf("%d", &a);
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            scanf("%d", &r[i][j]);
            if (i == j)
            {
            }
            if (j == a - i - 1)
            {
            }
        }
    }

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            int y = j;
            if (j == i)
                y = a - i - 1;
            if (j == a - i - 1)
                y = i;
            printf("%d ", r[i][y]);
        }
        printf("\n");
    }
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