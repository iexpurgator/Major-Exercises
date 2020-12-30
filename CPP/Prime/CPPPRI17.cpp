#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e6+1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	bool isPri[MAX];
	memset(isPri, true, MAX);
	isPri[0] = isPri[1] = false;
	for (long i = 2; i*i < MAX; i++) {
		if (isPri[i] == true) {
			for (long j = i*i; j < MAX; j += i)
				isPri[j] = false;
		}
	}
	int t; cin >> t;
	while(t--){
		long long n, m, cnt = 0;
		cin >> n >> m;
		for(long long i = n; i*i <= m; ++i)
			if(isPri[i]) cnt++;
		cout << cnt << endl;
	}
    return 0;
}
