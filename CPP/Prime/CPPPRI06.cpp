#include <bits/stdc++.h>
#define N 100001
using namespace std;
// Prime 6

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<bool> pri (n+1, true);
		pri[0] = pri[1] = false;
		for(int i = 2; i*i <= n; ++i){
			if(pri[i]){
				for(int j = i*i; j <= n; j += i)
					pri[j] = false;
			}
		}
		for(int i = 2; i <= n; ++i){
			if(pri[i] && pri[n-i]) {
				cout << i << ' ' << n-i << endl;
				break;
			}
		}
	}
}
