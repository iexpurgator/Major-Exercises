#include <bits/stdc++.h>
using namespace std;

int x, a[100], sum = 0;

int giaithua(int a)
{
    int gt = 1;
    for (int i = 1; i <= a; ++i)
    {
        gt *= i;
    }
    return gt;
}

void check()
{
    int tmp = x;
    while (tmp > 0)
    {
        sum += giaithua(tmp % 10);
        tmp /= 10;
    }
    if (x == 0)
        sum = 1;
    int o = sum == x ? 1 : 0;
    cout << o << endl;
}

int main()
{
    cin >> x;
    check();
    return 0;
}
