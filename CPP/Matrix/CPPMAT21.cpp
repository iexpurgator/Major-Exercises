#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

const int oo = 505;

ll A[oo][oo], dp[oo][oo] = {0}, n, m;

ll maxRectangle() {
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ll sum = 0;
            for (int k = j; k <= m; k++) {
                sum += A[i][k];
                dp[j][k] = (dp[j][k] >= 0) ? dp[j][k] + sum : sum;
                ans = max(ans, dp[j][k]);
            }
        }
    }
    return ans;
}

void solve() {
    int T; cin >> T;
    while (T--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> A[i][j];
            }
        }
        memset(dp, 0, sizeof(dp[0][0]) * oo * oo);
        cout << maxRectangle() << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
