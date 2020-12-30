#include <iostream>
//#include <algorithm>
//#inculde <cmath>
#include <vector>
//#include <stack>
//#include <queue>
//#include <cstring>
using namespace std;
#define INF 1000000000

int main(int T, char*argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--) {
		long n, res = -1;
		cin >> n;
		vector <long> a(n, 0);
		vector <long> dp(n, INF);
		dp[0] = 0;
		for(long i = 0; i < n; ++i) cin >> a[i];
		for(long i = 1; i < n; ++i) {
			for(long j = 0; j < i; ++j){
				if(i-j <= a[j] && dp[j] != INF) {
					dp[i] = min(dp[j] + 1, dp[i]);
					break;
				}
			}
		}
		if(dp[n-1] != INF) res = dp[n-1];
		cout << res << '\n';
// 		delete(a); delete(dp);
	}
	return 0;
}
