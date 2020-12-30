#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define oo 100000

int main(int t) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        long n, m, x; cin >> n >> m;
        vector < long > a(n, 0), b(m, 0);
        for (long i = 0; i < n; ++i) cin >> a[i];
        for (long i = 0; i < m; ++i) cin >> b[i];
        sort(a.begin(), a.end());
    	x = a[0] - 1;
        for (long i = 0; i < m; i++) {
            for (long j = 0; j < n; j++) {
                if (b[i] == a[j])
                    cout << a[j] << ' ', a[j] = x, (void) 0;
                else if (b[i] < a[j]) break;
            }
        }
        for (long i = 0; i < n; i++)
            if (a[i] != x) cout << a[i] << " ";
        cout << '\n';
    }
    return 0;
}
