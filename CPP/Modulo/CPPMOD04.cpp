#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, y; cin >> n;
		double k, sum = 0; cin >> k;
		for(int i = 1, j; i <= n; ++i){
			j = double(k);
			y = i%j;
			sum += y;
		}
		sum == k ? cout << 1 << endl : cout << 0 << endl;
	}
    return 0;
}
