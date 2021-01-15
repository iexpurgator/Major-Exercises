#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
using namespace std;

void solve() {
    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;
        int a[n+5], b[m+5];
        long long sum1[1005] = {0}, sum2[1005] = {0};
        for (int i =0; i < n; ++i){
            cin >> a[i];
            if (i == 0) { sum1[i] = a[i]; continue;}
            sum1[i] = sum1[i-1] + a[i];
        }
        for (int j = 0; j < m; ++j) {
            cin >> b[j];
            if (j == 0) { sum2[j] = b[j]; continue;}
            sum2[j] = sum2[j-1] + b[j];
        }
        long long res=0;
        for (int i=0; i < n && i < m; i++) {
            ll sum = max(sum1[i] + sum2[m-1] - sum2[i], sum2[i] + sum1[n-1] - sum1[i]);
            res = max(res, sum);
        }
        cout << res << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
