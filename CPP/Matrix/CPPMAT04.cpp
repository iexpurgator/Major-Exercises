#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
using namespace std;

int A[105][105], B[105][105] = { 0 };
vector < pair < int, int > > v;

void findLocal(int row, int col, queue < pair < int, int > > & qt) {
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (A[i][j] && !B[i][j]) {
                B[i][j] = 1;
                pair < int, int > lc;
                lc.first = i;
                lc.second = j;
                qt.push(lc);
            }
        }
    }
}

int BFS() {
    queue < pair < int, int > > q;
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        pair <int, int> lcl = v[i];
        if (!B[lcl.first][lcl.second]) {
            B[lcl.first][lcl.second] = 1;
            queue < pair < int, int > > qt;
            qt.push(lcl);
            while (!qt.empty()) {
                pair <int, int> lt = qt.front();
                qt.pop();
                int row = lt.first, col = lt.second;
                findLocal(row, col, qt);
            }
            count++;
        }
    }
    return count;
}

void solve() {
    int T; cin >> T;
    while (T--) {
        v.clear();
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> A[i][j];
                B[i][j] = 0;
                if (A[i][j]) {
                    pair < int, int > lp;
                    lp.first = i;
                    lp.second = j;
                    v.push_back(lp);
                }
            }
        }
        int ans = BFS();
        cout << ans << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
