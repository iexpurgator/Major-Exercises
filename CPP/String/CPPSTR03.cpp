#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		long n = s.length() - 1;
		int sum = 0;
		for(int i = 0; i < n; ++i){
			s[i] == '1' ? sum = sum*2 + 2 : sum *= 2;
			sum %= 5;
		}
		if(s[n] == '1') sum += 1;
		sum%5 == 0 ? cout << "Yes" << endl : cout << "No" << endl;
	}
    return 0;
}
