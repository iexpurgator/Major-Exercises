#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n+5];
        int minn = 999999;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            minn = min(minn, a[i]);
        }
        int GCD = a[0] - minn, res = 0;
        for (int i = 1; i < n; i++)
            GCD = __gcd(GCD, a[i] - minn);
        for (int i = 1; i*i <= GCD; i++) {
            if (GCD % i == 0) {
                if (i != GCD / i) res += 2;
                else res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
