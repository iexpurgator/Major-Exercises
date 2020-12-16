#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;

int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a == b && a == c) || (b == c && b == a) || (c == b && c == a))
        {
            cout << 3;
        }
        if ((a == b && a != c) || (b == c && b != a) || (c != b && c == a))
        {
            cout << 2;
        }
        if (((a * a + b * b) == c * c) || ((c * c + b * b) == a * a) || ((a * a + c * c) == b * b))
            cout << 1;
    }
    return 0;
}