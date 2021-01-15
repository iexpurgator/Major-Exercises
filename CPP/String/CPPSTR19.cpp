#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

ll F[105][105] = {0};

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        ll mod, k;
        string s;
        cin >> k >> mod >> s;
        memset(F, 0, sizeof(F));
        for (int i = 1; i <= s.length(); i++) {
            F[i][(s[i - 1] - '0') % mod] = 1;
            for (ll j = 0; j < mod; j++) {
                F[i][j] += F[i - 1][j];
                F[i][(j * 10 + s[i - 1] - '0') % mod] += F[i - 1][j];
            }
        }
        cout << F[k][0] << endl;
    }
}
