#include <bits/stdc++.h>
using namespace std;
int n, m, a[100] = {0};
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int tmp = 0;
    for (int i = 0; i < n - 1 - tmp; ++i)
    {
        for (int j = i + 1; j < n - tmp; ++j)
        {
            if (a[i] == a[j] && a[i] != -1)
            {
                int x = j + 1;
                while (x < n)
                {
                    swap(a[x - 1], a[x]);
                    x++;
                }
                tmp++;
                j -= 1;
            }
        }
    }
    for (int i = 0; i < n - tmp; ++i)
        cout << a[i] << " ";
    return 0;
}
/*
 10
 1 5 10 10 10 10 10 5 2 3
*/
