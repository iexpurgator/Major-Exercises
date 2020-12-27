#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		string a; cin >> a;
		long long b, c, d = 0; cin >> b;
		int len = a.length();
		for(int i = 0; i < len; ++i)
			d = (d*10 + a[i]-'0') % b;
		cout << d << '\n';
	}
}
