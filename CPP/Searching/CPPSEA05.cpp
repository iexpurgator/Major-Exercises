#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, min2 = -1;
		cin >> n;
		vector <long> a (n, 0);
		for(long i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for(int i = 1; i < n; ++i){
			if(a[i] > a[0]){
				min2 = a[i];
				break;
			}
		}
		if(min2 != -1) cout << a[0] << " "<< min2 << endl;
		else cout << -1 << endl;
	}
    return 0;
}
