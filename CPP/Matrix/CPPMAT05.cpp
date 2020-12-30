#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >>T;
    while(T--){
        int n; cin >> n;
        int a[n][n];
		long si[n] = {}, sj[n] = {0}, maxs = -1, cnt = 0;
        for (int i = 0; i < n; ++i) {
        	for (int j = 0; j < n; ++j) {
				cin >> a[i][j];
				si[i] += a[i][j];
				sj[j] += a[i][j];
				maxs = max(max(si[i], sj[j]), maxs);
			}
		}
		for (int i = 0, j = 0, dif; i < n && j < n;) {
			dif = min(maxs - si[i], maxs - sj[j]);
			cnt += dif;
			if ((si[i] += dif) == maxs) ++i;
			if ((sj[j] += dif) == maxs) ++j;
		}
		cout << cnt << '\n';
    }
}
