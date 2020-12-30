#include <bits/stdc++.h>
using namespace std;
// Sorting 15

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n, k; cin >> n >> k;
		long a[n], f[n] = {0};
		for (long i = 0; i < n; ++i) cin >> a[i];
		sort(a, a+n);
		long loc = 0, cnt = 0;
		for(int i = 0; i< n; ++i){
			f[i] = (i==0) ? 0 : f[i-1]-1;
			for(int j = loc+1; j < n; ++j){
				if(a[j]-a[i] >= k) break;
				else {
					loc++;
					f[i]++;
				}
			}
			cnt += f[i];
		}
		cout << cnt << endl;
	}
}
