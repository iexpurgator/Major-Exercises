#include <bits/stdc++.h>
using namespace std;

int n, t, a[100];
void NT()
{
    int x = 2;
    a[1] = 2;
    for (int i = 3; i < 100; i += 2)
    {
        int check = 0;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
            else
                check = 1;
        }
        if (check == 1)
        {
            a[x] = i;
            x++;
        }
        if (x == n * n + 1)
            break;
    }
}
int main()
{
    scanf("%d", &n);
    NT();
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
