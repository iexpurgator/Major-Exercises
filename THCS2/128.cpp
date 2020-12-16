#include <bits/stdc++.h>
using namespace std;

int n, m, a[100], sum;

bool nguyento(int a)
{
    int dem = 0;
    if (a < 2)
        return false;
    if (a == 2)
        return true;
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
            dem++;
        if (dem > 0)
            break;
    }
    if (dem == 0)
        return true;
    return false;
}

void check(int x)
{
    int tmp = x, sum = 0;
    while (tmp < m)
    {
        if (nguyento(tmp))
            sum += tmp;
        tmp++;
    }
    cout << sum << endl;
}
int main()
{
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    check(n);
    cout << endl;
    return 0;
}
