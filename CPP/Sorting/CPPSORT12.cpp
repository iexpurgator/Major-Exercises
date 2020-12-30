#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e8;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, m, big = -MAX, small = MAX; cin >> n >> m;
		long long res;
		for(long i = 0, j; i < n; ++i){
			cin >> j;
			big = (j > big) ? j : big;
		}
		for(long i = 0, j; i < m; ++i){
			cin >> j;
			small = (j < small) ? j : small;
		}
		res = big*small;
		cout << res << endl;
	}
    return 0;
}
