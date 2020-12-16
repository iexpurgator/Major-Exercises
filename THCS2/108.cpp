#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;

int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c)
        cout << 1;
    else
        cout << 0;
    return 0;
}
