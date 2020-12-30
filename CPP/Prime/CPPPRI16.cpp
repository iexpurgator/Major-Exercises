#include <bits/stdc++.h>
using namespace std;
#define N 100001

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector <bool> pri(N, true);
	pri[0] = pri[1] = false;
	for(long i = 2; i*i < N; ++i){
		if(pri[i])
			for(long j = i*i; j < N; j += i)
				pri[j] = false;
	}
	int t; cin >> t;
	while(t--){
		long long n, cnt = 0;
		cin >> n;
		for(long long i = 2; i*i <= n; ++i)
			pri[i] ? cnt++ : NULL;
		cout << cnt << '\n';
	}
    return 0;
}
