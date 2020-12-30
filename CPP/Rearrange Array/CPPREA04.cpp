#include <bits/stdc++.h>
using namespace std;
// re-array 4
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n], l = 0, r = (n+1)/2;
		for(int i = 0; i < n; ++i) cin >> a[i];
		sort(a, a+n);
	    for(int i = 0; i < n; i++)
	        cout << (i%2 == 0 ? a[l++] : a[r++]) << ' ';
	    cout << '\n';
	}
}
