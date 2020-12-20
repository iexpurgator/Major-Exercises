#include <bits/stdc++.h>
using namespace std;

int n, a2[100][100], x[100] = {0}, y[100] = {0};
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a2[i][j];
            x[i] += a2[i][j];
            y[j] += a2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
    for (int j = 0; j < n; j++)
        cout << y[j] << " ";
}
