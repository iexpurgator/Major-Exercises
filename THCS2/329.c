#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 97;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            for (int j = 0; j <= i; ++j)
                printf("%c ", x++);
        else
        {
            for (int j = i; j >= 0; --j)
                printf("%c ", x + j);
            x += i + 1;
        }
        printf("\n");
    }
}