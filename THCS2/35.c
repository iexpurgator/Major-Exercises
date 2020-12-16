#include <stdio.h>

int main()
{
    int n, a[100], b[100];
    scanf("%d", &n);
    int size = n / 2, tmp;
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &a[i]);
    }
    if (n % 2 == 1)
        scanf("%d", &tmp);
    for (int i = size - 1; i >= 0; --i)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < size; ++i)
    {
        if (a[i] != b[i])
        {
            printf("0");
            break;
        }
        if (i == size - 1)
            printf("1");
    }
    return 0;
}
