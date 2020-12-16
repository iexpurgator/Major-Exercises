#include <bits/stdc++.h>
using namespace std;

bool check(int k)
{
    int r_k = 0, tmp = k;
    while (tmp > 0)
    {
        r_k = r_k * 10 + tmp % 10;
        tmp = tmp / 10;
    }
    if (r_k == k)
        return true;
    return false;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (check(n))
        printf("1");
    else
        printf("0");
}