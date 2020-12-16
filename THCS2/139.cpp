#include <bits/stdc++.h>
using namespace std;
long long n;
void check(){
    long long dem = 0, a = 0, b = 1;
    while (dem < 70) {
        long long tmp = a;
        a += b;
        b = tmp;
        if (tmp == n) {
            cout << 1 << endl;
            break;
        }
        if (tmp > n) {
            cout << 0 << endl;
            break;
        }
        dem++;
    }
}
int main() {
    cin >> n ;
    check();
    return 0;
}
