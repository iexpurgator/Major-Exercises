#include <bits/stdc++.h>
using namespace std;
int n, arr[100];

void init()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}

void select()
{
    bool haveswap = false;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            haveswap = true;
        }
    }
    if (haveswap)
        select();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    select();
    cout << arr[0] << " ";
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > arr[0])
        {
            cout << arr[i] << endl;
            break;
        }
    }
    return 0;
}