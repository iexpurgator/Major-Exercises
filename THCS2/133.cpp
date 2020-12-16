#include <bits/stdc++.h>
using namespace std;

int a;
void check()
{
    int sum = 0;
    for (int i = 1; i < a; ++i)
    {
        if (a % i == 0)
            sum += i;
    }
    int x = sum == a ? 1 : 0;
    cout << x << endl;
}

int main()
{
    cin >> a;
    check();
    return 0;
}
