#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        ll n; cin >> n;
        if (n%100 == 86) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
