#include <bits/stdc++.h>
#define N 100001
using namespace std;
// re-array 5

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n; cin >> n;
		long a[n];
		for(long i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a+n);
		for(long i = 0; i < n/2; ++i)
			cout << a[n-i-1] << ' ' << a[i] << ' ';
		if(n&1) cout << a[n/2];
		cout << endl;
	}
}
