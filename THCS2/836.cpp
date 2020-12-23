#include <bits/stdc++.h>
#define MIN 2147483647
using namespace std;

int n, arr[100], k = 0;

void init()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}

void print()
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void select()
{
    int mini = MIN, tmp = 0;
    for (int i = k; i < n; i++)
    {
        if (arr[i] < mini)
        {
            tmp = i;
            mini = arr[i];
        }
    }
    swap(arr[tmp], arr[k]);
    print();
    k++;
    if (k != n - 1)
        select();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    select();
    return 0;
}