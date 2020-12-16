#include <bits/stdc++.h>
using namespace std;
int n, m;

bool check(int x)
{
    int reverse = 0, tmp = x;
    while (tmp > 0)
    {
        if (tmp % 10 == 9)
            return false;
        reverse = reverse * 10 + tmp % 10;
        tmp /= 10;
    }
    if (reverse == x)
        return true;
    return false;
}

int main()
{
    cin >> m;
    int dem = 0;
    for (int i = 2; i < m; ++i)
    {
        if (check(i))
        {
            cout << i << " ";
            dem++;
        }
    }
    cout << "\n" << dem << endl;
    return 0;
}
