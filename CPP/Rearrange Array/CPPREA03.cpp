#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e6+1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k, gud = 0, bad = 0, res;
		cin >> n >> k;
		long arr[n];
		for(int i = 0; i < n; ++i){
			cin >> arr[i];
	    	arr[i] <= k ? gud++ : NULL;
	    }
	    for(int i = 0; i < gud; ++i)
	    	arr[i] > k ? bad++ : NULL;
	    res = bad;
	    for(int i = 0, j = gud; j < n; ++i, ++j) {
	    	arr[i] > k ? bad-- : NULL;
	    	arr[j] > k ? bad++ : NULL;
	    	res = bad < res ? bad : res;
	    }
	    cout << res << endl;
	}
    return 0;
}
