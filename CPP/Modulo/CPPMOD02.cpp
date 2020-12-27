#include <iostream>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
	    ll a, m, s = 1;
		cin >> a >> m;
		for(int i = 0; i < m; ++i){
			if((a*i)%m == 1){
				cout << i << endl;
				break;
			}
			if(i == m-1) cout << -1 << endl;
		}
	}
    return 0;
}
