#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
        cout << 0 << endl;
    else
    {
        printf("%d %d %d %.2f %d", a + b, a - b, a * b, 1.0 * a / b, a % b);
    }
    return 0;
}