#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define oo 105

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
    	int n, maxx = 0; cin >> n;
    	int a[n], sum[n];
    	for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum[i] = a[i];
			maxx = max(a[i], maxx);
		}
    	for (int i = 1; i < n; ++i) {
    		for (int j = 0; j < i; ++j) {
    			if (a[i] > a[j] && sum[i] < sum [j] + a[i]) {
					sum[i] = sum[j] + a[i];
					maxx = max(maxx, sum[i]);
				}
			}
		}
		cout << maxx << '\n';
    }
    return 0;
}
