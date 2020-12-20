#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int n, a[100], cnt[MAX] = {0};

void init() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void process()
{
    for (int i = 0; i < n; i++)
        cnt[a[i]]++;
    int dem = 0;
    for (int i = 0; i < MAX; i++)
        if (cnt[i] > 1)
            dem++;
    cout << dem << endl;
    for (int i = 0; i < MAX; i++)
        if (cnt[i] > 1)
            cout << i << " ";
    cout << endl;
}

int main()
{
    init();
    process();
    return 0;
}
/*
10
1 5 10 10 5 2 3 5 4 7
*/