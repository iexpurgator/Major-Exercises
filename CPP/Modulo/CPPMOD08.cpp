#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define oo 105

int main(int t, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        ll p, n, res = 0;
        cin >> p >> n;
        ll X = n * (p / n);
        for (ll i = 1; i < n; i++) {
            if ((i * i) % n == 1) {
                if (i + X > p) X -= n;
                res += ((X) / n + 1);
            }
        }
        cout << res << '\n';
    }
    return 0;
}
