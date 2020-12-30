#include <iostream>
#include <vector>
#define oo 1000001
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
	vector < bool > Pri (oo, true);
	Pri[0] = Pri[1] = false;
	for (int i = 2; i*i < oo; ++i){
		if (Pri[i])
			for (int j = i*i; j < oo; j += i)
				Pri[j] = false;
	}
    while(T--) {
    	long n, x = 1, i; cin >> n;
    	for(i = 2; i < n && x; ++i){
    		if(Pri[i] && Pri[n-i]) x = 0;
		}
		if(x) cout << -1 << '\n';
		else cout << i-1 << ' ' << n-i+1 << '\n';
    }
    return 0;
}
