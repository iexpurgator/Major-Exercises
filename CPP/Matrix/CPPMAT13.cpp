#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

const int oo = 505;
int A[oo][oo], H[oo] = {0};

void solve() {
    int T; cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                cin >> A[i][j];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                H[j] = (A[i][j]) ? H[j] + 1 : 0;
            int L[oo], R[oo], D[oo], P[oo];
            int top = 0;
            D[0] = 0;
            for (int j = 1; j <= m; j++) {
                while (top > 0 && H[D[top]] >= H[j])
                    top--;
                L[j] = D[top] + 1;
                D[++top] = j;
            }
            P[0] = m + 1;
            top = 0;
            for (int j = m; j >= 1; j--) {
                while (top > 0 && H[P[top]] >= H[j])
                    top--;
                R[j] = P[top] - 1;
                P[++top] = j;
            }
            for (int j = 1; j <= m; j++)
                ans = max(ans, (R[j] - L[j] + 1) * H[j]);
        }
        cout << ans << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
