#include <bits/stdc++.h>
using namespace std;
int a[2][100] = {{0}}, n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[0][i];
    int dem = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int x = -1;
        int tmp = 0;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[0][j] == a[0][i] && a[1][j] == 0)
            {
                x = a[0][j];
                tmp++;
            }
        }
        for (int j = 0; j < n; ++j)
        {
            if (a[0][j] == x)
            {
                a[1][j] = tmp;
                dem++;
            }
        }
    }
    cout << n - dem << "\n";
    for (int i = 0; i < n; ++i)
        if (a[1][i] == 0)
            cout << a[0][i] << " ";
    cout << endl;
    return 0;
}
