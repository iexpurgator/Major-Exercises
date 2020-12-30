#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;
const long long LENGTH = 1e7+1;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
    	long n; cin >> n;
    	vector<long long> a(n+1, 0);
    	for(long long i = 0, x, j = 0; i < n; ++i){
    		cin >> x;
    		if(x > 0) a[j++] = x;
		}
		for(long i = 0; i < n; ++i) cout << a[i] << ' ';
		cout << endl;
	}
    return 0;
}
