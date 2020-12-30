#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string a, b, s[1000];
		getline(cin, a);
		stringstream sa(a);
		int i = 1;
		while(sa >> s[++i]);
		for(int j = i-1; j >= 0; --j)
			cout << s[j] << ' ';
		cout << endl;
	}
}
