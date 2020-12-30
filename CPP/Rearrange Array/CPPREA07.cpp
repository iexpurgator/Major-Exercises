#include <bits/stdc++.h>
using namespace std;

bool strcompare(string a, string b){
	string ab = a+b;
	string ba = b+a;
	return ab > ba ? 1 : 0;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n; cin >> n;
		string s, a[n];
		cin.ignore();
		getline(cin, s);
		stringstream sa(s);
		int i = -1;
		while(sa >> a[++i]);
		sort(a, a+n, strcompare);
		for(int j = 0; j < i; ++j) cout << a[j];
		cout << endl;
	}
}
