#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    vector<bool> pri (10001, true);
    pri[0] = pri[1] = false;
    for(int i = 2; i*i < 10001; ++i){
    	if(pri[i]){
    		for(int j = i*i; j < 10001; j += i)
    			pri[j] = false;
		}
	}
    int n;
    int t; cin >> t;

    while(t--){
    	cin >> n;
    	for(int i = 2; i*i <= n; ++i){
    		if(pri[i]) cout << i*i << ' ';
		}
	    cout << endl;
    }
    return 0;
}
