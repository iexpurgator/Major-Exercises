#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string s, word;
		getline(cin, s);
		int cnt = 0;
		stringstream ss(s);
		while(ss >> word) cnt++;
		cout << cnt << endl;
	}
    return 0;
}
