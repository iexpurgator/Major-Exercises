#include <bits/stdc++.h>
using namespace std;

int n, m, a[100], sum;

void check(int x)
{
    unsigned long long gt = 1;
    for (int i = 1; i <= x; ++i)
    {
        gt *= i;
    }
    cout << gt;
}

int main()
{
    cin >> n;
    //    if(n > m) swap(n, m);
    check(n);
    cout << endl;
    return 0;
}
