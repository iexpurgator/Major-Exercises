#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k, x = -1;
		cin >> n;
		for(long i = 1; i < n; ++i) {
			cin >> k;
			if(k != i && x == -1) x = i;
		}
		cout << x << endl;
	}
    return 0;
}
