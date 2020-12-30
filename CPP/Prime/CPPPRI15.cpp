#include <bits/stdc++.h>
#define N 100001
using namespace std;
// Sorting 15

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<bool> pri (N, true);
	pri[0] = pri[1] = false;
	for(int i = 2; i*i < N; ++i){
		if(pri[i]){
			for(int j = i*i; j < N; j += i)
				pri[j] = false;
		}
	}
	int a[N] = {0};
	a[1] = 1; a[2] = 2;
	for(int i = 3; i < N; ++i){
		if(i%2 == 0) a[i] = 2;
		else if(pri[i]) a[i] = i;
		else{
			for(int j = 3;; ++j){
				if(i%j == 0){
					a[i] = j;
					break;
				}
			}
		}
	}
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		for(int i = 1; i <= n; ++i)
			cout << a[i] << ' ';
		cout << endl;
	}
}
