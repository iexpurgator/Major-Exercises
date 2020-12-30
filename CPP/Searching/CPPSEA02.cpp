#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k, x = -1, a;
		cin >> n >> k;
		for(long i = 0; i < n; ++i) {
			cin >> a;
			if(a == k) x = (x == -1) ? 1 : x;
		}
		cout << x << endl;
	}
    return 0;
}
