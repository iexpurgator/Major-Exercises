#include <bits/stdc++.h>
using namespace std;

bool check(int k)
{
    int r_k = 0, s = 0, tmp = k;
    while (tmp > 0)
    {
        r_k = r_k * 10 + tmp % 10;
        s += tmp % 10;
        tmp = tmp / 10;
    }
    if (s % 10 == 0 && r_k == k)
        return true;
    return false;
}

int solve(int n)
{
    int i = 1, d = 0;
    for (int k = 1; k < n; k++)
        i *= 10;
    for (int k = i; k < (i * 10); k++)
        if (check(k))
            d++;
    return d;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));
}