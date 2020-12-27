#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 10000
#define N 10001
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >>T;
    while(T--){
        int n, m; cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
				cin >> a[i][j];
        int r = 0, c = 0, i = 0, mn = n*m;
        while (r < n && c < m && mn > 0) {
            for (;c < m; ++c, --mn)
                cout << a[r][c] << ' ';
            r++; c--;
            for (;r < n; ++r, --mn)
                cout << a[r][c] << ' ';
            r--; c--;
            for (;c >= i && mn > 0; --c, --mn)
                cout << a[r][c] << ' ';
            r--; c++;
            for (;r > i && mn > 0; --r, --mn)
                cout << a[r][c] << ' ';
            r++; c++;
            i++; n--; m--;
        }
		cout << '\n';
    }
}