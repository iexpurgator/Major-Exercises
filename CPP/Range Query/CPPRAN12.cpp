#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n;
		m = 2*n+1;
		int a[n], b[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> b[i];

		int cnt1 = 0, cnt2 = 0, res = 0;
		int curr_diff, diff_i, len;
		vector <long> diff(m, -1);
	    for(int i = 0; i < n; ++i) {
	        cnt1 += a[i];
	        cnt2 += b[i];
	        curr_diff = cnt1 - cnt2;
	        diff_i = n + curr_diff;
	        if (curr_diff == 0) res = i+1;
	        else if (diff[diff_i] == -1) diff[diff_i] = i;
	        else {
	            len = i - diff[diff_i];
	            len > res ? res = len : NULL;
	        }
	    }
		cout << res << endl;
	}
    return 0;
}
