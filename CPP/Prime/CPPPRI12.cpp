#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int n, k; cin >> n >> k;
    	for(int i = 2, j = 0; i <= n; ++i){
	    	while(n%i == 0){
    			j++;
    			n /= i;
    			if(j == k) {
					cout << i << endl;
					k = -1;
				}
	    	}
	    	if(k == -1) break;
	    }
	    if(k != -1) cout << -1 << endl;
	    cout << endl;
    }
    return 0;
}
