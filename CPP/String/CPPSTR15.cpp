#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string a;
		getline(cin, a);
		long cnt = a.length(), n = cnt;
		for(int i = 0; i < n-1; ++i)
			for(int j = i+1; j < n; ++j)
				if(a[i] == a[j]) cnt++;
		cout << cnt << endl;
	}
}
