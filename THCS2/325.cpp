#include <bits/stdc++.h>
using namespace std;
int n, m, a[100] = {0}, sum;
int chan = 0, le = 0, b[100];

void check()
{
    int k = 0;
    cout << le << " ";
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 != 0)
            cout << a[i] << " ";
        else
        {
            b[k] = a[i];
            k++;
        }
    }
    cout << endl;
    cout << chan << " ";
    for (int i = 0; i < k; ++i)
        cout << b[i] << " ";
    cout << endl;
}

int main()
{
    cin >> n;
    // if (n > m)
    //     swap(n, m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            chan++;
        else
            le++;
    }
    check();
    return 0;
}
