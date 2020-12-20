#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 100

int main()
{
    int n, m, a[N], b[N], loc;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    scanf("%d", &loc);
    for (int i = 0; i < loc; ++i)
        printf("%d ", a[i]);
    for (int i = 0; i < m; ++i)
        printf("%d ", b[i]);
    for (int i = loc; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}