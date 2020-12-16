#include <bits/stdc++.h>
#define ll long long

ll a, b;
ll sum(ll *x)
{
    ll tmp = *x, sum = 0;
    if (tmp < 0)
        tmp *= -1;
    while (tmp > 0)
    {
        sum += tmp % 10;
        tmp /= 10;
    }
    return sum;
}

int main()
{
    scanf("%lli%lli", &a, &b);
    ll A = sum(&a);
    ll B = sum(&b);
    if (A <= B)
        printf("%lli %lli\n", a, b);
    else
        printf("%lli %lli\n", b, a);
}