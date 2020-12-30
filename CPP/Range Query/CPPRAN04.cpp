#include <iostream>
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
    	int n; cin >> n;
    	long a[n], dp[n+1], res;
		cin >> a[0];
    	dp[0] = res = a[0];
    	for(int i = 1; i < n; ++i){
    		cin >> a[i];
    		dp[i] = max(dp[i-1]+a[i], a[i]);
    		res = max(res, dp[i]);
		}
		cout << res << '\n';
    }
    return 0;
}
