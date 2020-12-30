#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
        int a[n], dp[n] = {0}, cnt , maxx = 0;
        for(int i = 0; i < n; ++i) cin >> a[i];
        dp[0] = 1;
        for(int i = 1; i < n; ++i){
        	cnt = 0;
        	for(int j = 0; j < i; ++j){
        		a[j] < a[i] ? (cnt = dp[j] > cnt ? dp[j] : cnt) : NULL;
        	}
			dp[i] = cnt+1;
			maxx = dp[i] > maxx ? dp[i] : maxx;
		}
		cout << maxx << '\n';
	}
}
