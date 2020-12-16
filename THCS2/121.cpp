#include <bits/stdc++.h>
using namespace std;

int a;
void check()
{
    for (int i = 1; i <= a; ++i)
    {
        if (a % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    cin >> a;
    check();
    return 0;
}
