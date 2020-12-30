#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define oo 105

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        int a[n][m];
        for (int i = 0, k = 1; i < n; ++i)
        	for (int j = 0; j < m; ++j)
				cin >> a[i][j];
		vector < int > st;
        int r = 0, c = 0, i = 0, mn = n*m;
        while (r < n && c < m && mn > 0) {
            for (;c < m; ++c, --mn)
                st.push_back(a[r][c]);
            r++; c--;
            for (;r < n; ++r, --mn)
                st.push_back(a[r][c]);
            r--; c--;
            for (;c >= i && mn > 0; --c, --mn)
                st.push_back(a[r][c]);
            r--; c++;
            for (;r > i && mn > 0; --r, --mn)
                st.push_back(a[r][c]);
            r++; c++;
            i++; n--; m--;
        }
		cout << st[k-1] << '\n';
    }
    return 0;
}
