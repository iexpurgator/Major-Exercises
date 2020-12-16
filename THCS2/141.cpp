#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
        cout << "VSN" << endl;
    else if (a == 0 && b != 0)
        cout << "VN" << endl;
    else if (b == 0)
        printf("%.2f", 0.00);
    else
        printf("%.2f", -1.0 * b / a);
    return 0;
}