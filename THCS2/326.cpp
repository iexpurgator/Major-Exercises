#include <bits/stdc++.h>
using namespace std;

int n, m, a[100][100] = {{0}}, sum;
int chan = 0, le = 0, b[100];

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

int main()
{
    cin >> n;
    // if (n > m)
    //     swap(n, m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    int k = 1, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k; ++j)
            if (nguyento(a[i][j]))
                sum += a[i][j];
        // cout << endl;
        k++;
    }
    cout << sum << endl;
    // check();
    return 0;
}
/*
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
