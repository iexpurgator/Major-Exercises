#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, k, h;
		cin >> n >> k;
		n += k;
		vector <long long> a(n, 0);
		for(long i = 0; i < n; ++i)
			cin >> a[i];
		sort(a.begin(), a.end());
		for(int i = 0; i < n; ++i)
			cout << a[i] << ' ';
		cout << endl;
	}
    return 0;
}
