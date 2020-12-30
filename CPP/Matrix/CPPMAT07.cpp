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
    	int n; cin >> n;
    	int a[n][n];
    	for(int i = 0; i < n; ++i)
    		for(int j =0; j < n; ++j)
    			cin >> a[i][j];

    	for(int i = 0; i < n; ++i){
    		if(i&1){
    			for(int j = n-1; j >= 0; --j){
    				cout << a[i] [j] << ' ';
				}
			} else {
				for(int j = 0; j < n; ++j){
					cout << a[i][j] << ' ';
				}
			}
		}
		cout << endl;
    }
    return 0;
}
