#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;

int a, b, c = 0;
int main()
{
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a; i <= b; i++)
        c += i;
    cout << c;
    return 0;
}
