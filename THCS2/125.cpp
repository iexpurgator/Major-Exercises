#include <bits/stdc++.h>
using namespace std;

int a;
void check()
{
    int dem = 0;
    if (a == 0 || a == 1)
        dem = 1;
    for (int i = 2; i < sqrt(a); ++i)
    {
        if (a % i == 0)
            dem++;
    }
    if (dem == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main()
{
    cin >> a;
    check();
    return 0;
}
