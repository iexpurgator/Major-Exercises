#include <stdio.h>

void out(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
                printf("~");
            else
            {
                if (i == j)
                    printf("1");
                else
                    printf("%d", j - i + 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    out(n);
    return 0;
}
