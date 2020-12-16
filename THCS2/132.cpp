#include <bits/stdc++.h>
using namespace std;

int n, m;
int power(int a, int n)
{
    if (a == 0)
        return 0;
    if (n == 1)
        return a;
    int poww = 1;
    while (n > 0)
    {
        poww *= a;
        --n;
    }
    return poww;
}
void check(int n)
{
    int dem = 0, tmp = n, sum = 0;
    while (tmp > 0)
    {
        tmp /= 10;
        ++dem;
    }
    tmp = n;
    while (tmp > 0)
    {
        sum += power(tmp % 10, dem);
        tmp /= 10;
    }
    int o = sum == n ? 1 : 0;
    //    cout << o << endl;
    if (o == 1)
        cout << n << " ";
}
int main()
{
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    for (int i = n; i <= m; ++i)
    {
        check(i);
    }
    cout << endl;
    return 0;
}
