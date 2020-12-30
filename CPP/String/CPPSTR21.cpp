#include <iostream>
using namespace std;

int main(int T, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--){
		string s; cin >> s;
		int a[26] = {0}, sum = 0;
		for(int i = 0; i < s.length(); ++i) {
			if('A' <= s[i] && s[i] <= 'Z') a[s[i] - 'A']++;
			else sum += (s[i] - '0');
		}
		for(int i = 0; i < 26; ++i){
			while(a[i] > 0) {
				cout << char(i + 'A');
				a[i]--;
			}
		}
		cout << sum << '\n';
	}
    return 0;
}
