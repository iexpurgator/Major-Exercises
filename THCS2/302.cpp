#include <bits/stdc++.h>
using namespace std;

int x, a[100];
int main()
{
    int chan = 0, le = 0;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            chan++;
        else
            le++;
    }
    cout << chan << " " << le << endl;
    return 0;
}
