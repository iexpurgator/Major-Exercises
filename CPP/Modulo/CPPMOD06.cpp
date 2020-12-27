#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		string a; cin >> a;
		long long b, m, d = 0, d1; cin >> b >> m;
		long len = a.length();
		for (long i = 0; i < len; ++i)
            d = (d*10 + a[i] - 48) % m;
		d1 = d%m;
		d = 1;
		while(b > 0){
			if(b&1) d = (d*d1)%m;
			b >>= 1;
			d1 = (d1*d1)%m;
		}
		cout << d << '\n';
	}
}
