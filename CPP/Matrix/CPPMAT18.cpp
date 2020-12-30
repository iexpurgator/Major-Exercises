#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define oo 105

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[n][m];
        for (int i = 0, k = 1; i < n; ++i)
        	for (int j = 0; j < m; ++j)
				cin >> a[i][j];
        stack < int > st;
        int r = 0, c = 0, i = 0, mn = n*m;
        while (r < n && c < m && mn > 0) {
            for (;c < m; ++c, --mn)
                st.push(a[r][c]);
            r++; c--;
            for (;r < n; ++r, --mn)
                st.push(a[r][c]);
            r--; c--;
            for (;c >= i && mn > 0; --c, --mn)
                st.push(a[r][c]);
            r--; c++;
            for (;r > i && mn > 0; --r, --mn)
                st.push(a[r][c]);
            r++; c++;
            i++; n--; m--;
        }
		while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}
		cout << '\n';
    }
    return 0;
}
