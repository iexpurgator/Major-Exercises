#include <bits/stdc++.h>
#define N 100005
using namespace std;
// Sorting 4

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n, k; cin >> n >> k;
		long a[N] = {0}, b[N] = {0};
		for (long i = 0, j; i < n; ++i){
			cin >> j;
			a[j] = 1;
		}
		for (long i = 0, j; i < k; ++i){
			cin >> j;
			b[j] = 1;
		}
		for(int i = 0; i < N; ++i)
			if(a[i] == 1 || b[i] == 1) cout << i << ' ';
		cout << endl;
		for(int i = 0; i < N; ++i)
			if(a[i] == 1 && b[i] == 1) cout << i << ' ';
		cout << endl;
	}
}
