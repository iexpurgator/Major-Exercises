#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n;
		cin >> n;
		long a[n] = {0};
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 1, j = 0; i < n; ++i){
			if(a[i-1] == a[i] && a[i] != 0){
				a[i-1] += a[i];
				a[i] = 0;
			}
		}
		int j = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] > 0) {
				cout << a[i] << ' ';
				j++;
			}
		}
		for(int i = j-1; j < n; ++j) cout << 0 << ' ';
		cout << endl;
	}
}
