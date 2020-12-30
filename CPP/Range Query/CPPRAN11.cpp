#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k = 1000, h;
		cin >> n;
		long a[n];
		for(long i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a+n);
		for(int i = n-1; i > 0; --i){
			h = a[i] - a[i-1];
			h < k ? k = h : NULL;
		}
		cout << k << endl;
	}
    return 0;
}
