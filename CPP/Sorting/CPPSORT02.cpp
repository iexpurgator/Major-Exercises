#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n, k; cin >> n >> k;
		long a[n];
		for (long i = 0; i < n; ++i) cin >> a[i];
		for (int i = 1; i < n; i++) {
			int diff = abs(a[i] - k);
			int j = i - 1;
			if (abs(a[j] - k) > diff) {
				int temp = a[i];
				while (abs(a[j] - k) > diff && j >= 0) {
					a[j + 1] = a[j];
					j--;
				}
				a[j + 1] = temp;
			}
		}
		for (long i = 0; i < n; ++i) cout << a[i] << ' ';
		cout << endl;
	}
}
