#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main (int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        while (1) {
            int tmp = n;
            n = 0;
            while (tmp > 0) {
                n += tmp%10;
                tmp /= 10;
            }
            if (n < 10) break;
        }
    cout << n << endl;
    }
}
