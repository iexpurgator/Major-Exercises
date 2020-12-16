#include <bits/stdc++.h>
using namespace std;

int n;
void check()
{
    int dem = 0, a = 0, b = 1;
    while (dem < n)
    {
        int tmp = a;
        a += b;
        b = tmp;
        cout << tmp << " ";
        dem++;
    }
}

int main()
{
    cin >> n;
    check();
    cout << endl;
    return 0;
}
