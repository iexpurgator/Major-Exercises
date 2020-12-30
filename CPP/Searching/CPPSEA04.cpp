#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k, z;
		bool found = false;
		cin >> n >> k;
		for(long i = 1; i <= n; ++i) {
			cin >> z;
			if(z == k && !found){
				cout << i << endl;
				found = true;
			}
		}
	}
    return 0;
}
