#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

const int oo = 2 * 1e3;
int A[oo][oo] = {0}, visit[oo][oo] = {0};
int n, m, x, y, z, t;

int BFS() {
    int ans = 0;
    if (!A[x + 1][y + 1]) return -1;
    queue < pair < int, int > > q;
    q.push(pair < int, int > (x + 1, y + 1));
    while (!q.empty()) {
        int len = 0, SIZE = (int) q.size();
        while (len < SIZE) {
            pair < int, int > local = q.front();
            q.pop();
            int i = local.first, j = local.second;
            if (i == z + 1 && j == t + 1) return ans;
            if (A[i + 1][j] && !visit[i + 1][j]) {
                q.push(pair < int, int > (i + 1, j));
                visit[i + 1][j] = 1;
            }
            if (A[i][j + 1] && !visit[i][j + 1]) {
                q.push(pair < int, int > (i, j + 1));
                visit[i][j + 1] = 1;
            }
            if (A[i - 1][j] && !visit[i - 1][j]) {
                q.push(pair < int, int > (i - 1, j));
                visit[i - 1][j] = 1;
            }
            if (A[i][j - 1] && !visit[i][j - 1]) {
                q.push(pair < int, int > (i, j - 1));
                visit[i][j - 1] = 1;
            }
            len++;
        }
        ans++;
    }
    return -1;
}

void solve() {
    int T; cin >> T;
    while (T--) {
        cin >> n >> m >> x >> y >> z >> t;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> A[i][j];
                visit[i][j] = 0;
            }
        }
        cout << BFS() << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
