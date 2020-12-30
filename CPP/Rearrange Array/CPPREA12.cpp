#include <bits/stdc++.h>
#define P -1000000000

using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long n, res = P;
        cin >> n;
        vector < long long > a (n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            long long s = 1;
            for (int j = i; j < n; j++) {
                s *= a[j];
                res = max(res, s);
            }
        }
        cout << res << '\n';
    }
    return 0;
}
