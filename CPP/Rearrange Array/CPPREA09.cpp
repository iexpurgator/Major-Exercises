#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n; cin >> n;
		long long a[n];
		for(int i = 0 ; i < n; ++i) cin >> a[i];
		long long s[n];
		cout << a[0]*a[1] << ' ';
		for(long i = 1; i < n-1; ++i)
			cout << a[i-1]*a[i+1] << ' ';
		cout << a[n-1]*a[n-2];
		cout << '\n';
	}
}
