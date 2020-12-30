#include <iostream>
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
    	string s; cin >> s;
    	long sum = 0, num = 0;
		for(int i = 0; i < s.length(); ++i){
			if('0' <= s[i] && s[i] <= '9') {
				num = num*10 + s[i]-'0';
			} else {
				sum += num;
				num = 0;
			}
		}
		sum += num;
		cout << sum << endl;
    }
    return 0;
}
