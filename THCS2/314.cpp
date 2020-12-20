#include <cstdio>
#define size 100

int main()
{
    int n, a[size], b[size], m;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 0; i < n; ++i)
    {
        if (i < n - m)
            b[i] = a[i + m];
        else
            b[i] = a[i + m - n];
    }
    for (int i = 0; i < n; ++i)
        printf("%d ", b[i]);
    return 0;
}