#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n = t, spheic = 0, cnt = 0, mod = 0;
		cin >> n;
		for(int i = 2; i <= n; ++i){
			while(n%i==0){
				mod++;
				n /= i;
			}
			cnt = cnt + mod;
			if(mod > 1 || cnt > 3) break;
			if(i < n) mod = 0;
		}
		if(cnt == 3 && mod == 1) spheic = 1;
		cout << spheic << '\n';
	}
    return 0;
}
