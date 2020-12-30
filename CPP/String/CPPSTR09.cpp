#include <iostream>
#define MAXX numMax = max(num, numMax)
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
    	string s; cin >> s;
    	long numMax = 0, num = 0;
		for(int i = 0; i < s.length(); ++i){
			if('0' <= s[i] && s[i] <= '9') {
				num = num*10 + s[i]-'0';
			} else {
				MAXX;
				num = 0;
			}
		}
		cout << max(num, numMax) << endl;
    }
    return 0;
}
