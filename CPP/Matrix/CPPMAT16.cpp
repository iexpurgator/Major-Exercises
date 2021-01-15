#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define oo 30
using namespace std;

pair < int, int > PAIR[oo][oo];

int A[oo][oo], n;

void setPair() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j]) {
                PAIR[i][j].first = PAIR[i][j - 1].first + 1;
                PAIR[i][j].second = PAIR[i - 1][j].second + 1;
            } else PAIR[i][j] = pair < int, int > (0, 0);
        }
    }
}
int proc() {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int MAX = n - i + 1;
        for (int j = 1; j <= n; j++) {
            for (int k = j; k <= n; k++) {
                if (!A[i][k] || k - j + 1 > MAX) break;
                else {
                    int row1 = PAIR[i][k].first - PAIR[i][j].first + 1;
                    if (row1 <= ans) continue;
                    pair < int, int > p1 = PAIR[i + row1 - 1][j];
                    pair < int, int > p2 = PAIR[i + row1 - 1][k];
                    int row2 = p2.first - p1.first + 1;
                    int col1 = p1.second - PAIR[i][j].second + 1;
                    int col2 = p2.second - PAIR[i][k].second + 1;
                    if (row1 == row2 && row1 == col1 && row1 == col2) ans = max(ans, row1);
                }
            }
        }
    }
    return ans;
}

void solve() {
    int T; cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                PAIR[i][j].first = 0;
                PAIR[i][j].second = 0;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                char c;
                cin >> c;
                A[i][j] = (c == 'X') ? 1 : 0;
            }
        }
        setPair();
        cout << proc() << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
