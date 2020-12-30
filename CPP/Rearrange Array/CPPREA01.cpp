#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
    	long n; cin >> n;
    	vector<long long> a(n+1, -1);
    	for(long long i = 0, x; i < n; ++i){
    		cin >> x;
    		if(x >= 0 && x < n) a[x] = x;
		}
		for(long i = 0; i < n; ++i) cout << a[i] << ' ';
		cout << endl;
	}
    return 0;
}
