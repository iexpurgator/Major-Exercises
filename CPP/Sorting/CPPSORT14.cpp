#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long n, maxx = -100000, minn = 100000, cnt = 0;
		long a[100000] = {0};
		cin >> n;
		for(long i = 0, j; i < n; ++i){
			cin >> j;
			j > maxx ? maxx = j : NULL;
			j < minn ? minn = j : NULL;
			a[j] = 1;
		}
		for(long i = minn; i <= maxx; ++i)
			a[i] == 0 ? cnt++ : NULL;
		cout << cnt << endl;
	}
    return 0;
}
