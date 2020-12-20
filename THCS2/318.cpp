#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

bool NT(int x)
{
    if (x == 2)
        return true;
    if (x % 2 == 0 || x < 2)
        return false;
    for (int i = 3; i <= sqrt(x); i += 2)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n, a[100][100], b[100][100] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    int loc = 0, maxi = 0;
    for (int i = 0; i < n; ++i)
    {
        int k = 1;
        for (int j = 0; j < n; ++j)
        {
            if (NT(a[i][j]))
            {
                b[i][0] = b[i][0] + 1;
                b[i][k++] = a[i][j];
            }
        }
        if (b[i][0] == 0)
            continue;
        else if (maxi < b[i][0])
        {
            maxi = b[i][0];
            loc = i;
        }
    }
    if (maxi == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << loc + 1 << endl;
    for (int i = 1; i <= maxi; ++i)
        cout << b[loc][i] << " ";
    cout << endl;
    return 0;
}