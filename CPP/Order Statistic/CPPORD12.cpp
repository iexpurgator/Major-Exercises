#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e6+1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n;
		cin >> n;
		vector <long> m (MAX, 0);
		m[0] = 1;
		for(long i = 0, j; i < n; ++i){
			cin >> j;
			if(j > 0) m[j] = 1;
		}
		for(long i = 0; i < MAX; ++i){
			if(m[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
    return 0;
}
