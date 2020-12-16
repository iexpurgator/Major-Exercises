#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll x, sum = 0;
ll check(ll a)
{
    ll dem = 0;
    for (ll i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
            dem++;
    }
    if (dem == 0)
        sum += a;
    if (a - 1 > 1)
        return check(--a);
    cout << sum << endl;
    return 0;
}

int main()
{
    cin >> x;
    check(x - 1);
    return 0;
}
