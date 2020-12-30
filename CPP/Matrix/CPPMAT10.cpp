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
    	int n, m; cin >> n >> m;
    	int a[n][m];
    	int I[n] = {0}, J[m] = {0};
    	for(int i = 0; i < n; ++i){
    		for(int j =0; j < m; ++j){
    			cin >> a[i][j];
    			if(a[i][j] == 1){
    				I[i] = 1;
    				J[j] = 1;
				}
    		}
    	}
    	for(int i = 0; i < n; ++i){
    		for(int j = 0; j < m; ++j){
    			if(I[i] == 1 || J[j] == 1) a[i][j] = 1;
			}
		}
    	for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j)
				cout << a[i][j] << ' ';
			cout << endl;
		}
		cout << endl;
    }
    return 0;
}
