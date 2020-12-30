#include <bits/stdc++.h>
#define N 1000007
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n;
        cin >> n;
        long a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        long maxx = -1;
        for(int i = 0; i < n-1; ++i){
        	for(int j = i+1; j < n; ++j){
        		if(a[j]-a[i] > maxx) maxx = a[j]-a[i];
			}
		}
		cout << maxx << '\n';
	}
}
