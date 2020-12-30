#include <bits/stdc++.h>
#define N 100001
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		string a;
// 		cin.ignore();
// 		getline(cin, a);
        cin >> a;
		long n = a.length();
		long b[n] = {0};
		for(long i = 0; i < n ; ++i){
			for(long j = 0; j < n; ++j){
				if(i != j && a[j] == a[i]){
					b[i] = 1;
					break;
				}
			}
		}
		for(long i = 0; i < n; ++i)
			if(b[i] == 0) cout << a[i];
		cout << endl;
	}
}
