#include <bits/stdc++.h>
using namespace std;

int n, t, a[100];
void fibonacci()
{
    int x = 3;
    a[1] = 0;
    a[2] = 1;
    while (x < (n * n + 1))
    {
        a[x] = a[x - 1] + a[x - 2];
        x++;
    }
}

int main()
{
    scanf("%d", &n);
    fibonacci();
    int a2[n][n], x = 1, T = 0, B = n - 1, L = 0, R = n - 1;
    while (x <= n * n)
    {
        for (int i = L; i <= R; x++)
            a2[T][i++] = x;
        T++;
        for (int i = T; i <= B; x++)
            a2[i++][R] = x;
        R--;
        for (int i = R; i >= L; x++)
            a2[B][i--] = x;
        B--;
        for (int i = B; i >= T; x++)
            a2[i--][L] = x;
        L++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[a2[i][j]]);
        printf("\n");
    }
}
