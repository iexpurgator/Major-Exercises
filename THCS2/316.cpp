#include <cstdio>
#define size 100

int maxx(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main()
{
    int n, a[size];
    scanf("%d", &n);
    int tmp = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        tmp = maxx(&a[i], &tmp);
    }
    int tmp2 = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int temp = tmp2;
        if (tmp2 < tmp)
            tmp2 = maxx(&a[i], &tmp2);
        if (tmp2 == tmp)
            tmp2 = temp;
        temp = tmp2;
    }
    printf("%d %d\n", tmp, tmp2);
    return 0;
}