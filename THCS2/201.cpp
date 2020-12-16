#include <bits/stdc++.h>
using namespace std;

int n;

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

bool check(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    if (sum % 5 == 0)
        return true;
    return false;
}

int main()
{
    cin >> n;
    int dem = 0;
    for (int i = 5; i <= n; ++i)
    {
        if (check(i) && nguyento(i))
        {
            cout << i << " ";
            dem++;
        }
    }
    cout << "\n"
         << dem << endl;
    return 0;
}
