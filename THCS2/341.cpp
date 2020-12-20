#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];
void print()
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
    cout << endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - 1; ++j)
            for (int k = j + 1; k < n; ++k)
                if (a[k][i] > a[j][i])
                    swap(a[k][i], a[j][i]);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}