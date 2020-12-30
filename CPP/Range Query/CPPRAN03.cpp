#include <bits/stdc++.h>
#define N 100001
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<bool> pri(N, true);
	pri[0] = pri[1] = false;
	for(int i = 2; i*i < N; ++i){
		if(pri[i])
			for(int j = i*i; j < N; j += i)
				pri[j] = false;
	}
	int T; cin >> T;
	while (T--) {
		long n, m, cnt = 0;
        cin >> n >> m;
        for(int i = n; i <= m ; ++i)
        	pri[i] ? cnt++ : NULL;
		cout << cnt << '\n';
	}
}
