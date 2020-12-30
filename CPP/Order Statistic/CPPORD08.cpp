#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k = -10000000;
		cin >> n;
		for(long i = 0, j; i < n; ++i){
			cin >> j;
			j > k ? k = j : NULL;
		}
		cout << k << endl;
	}
    return 0;
}
