#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s;
	int sum, n;
	int t; cin >> t;
	while(t--){
		cin >> s;
		sum = 0;
		n = s.length();
		for(int i = 0; i < n; ++i)
			i&1 ? sum = sum + (s[i] - '0') : sum = sum - (s[i] - '0');
		sum = abs(sum);
		sum%11 == 0 ? cout << 1 << endl : cout << 0 << endl;
	}
    return 0;
}
