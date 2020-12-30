#include <iostream>
#include <cmath>
using namespace std;

bool Pri(int x){
	if (x < 2) return false;
	for (int i = 2; i <= sqrt(x); ++i)
		if (x%i == 0) return false;
	return true;
}

int main (int t) {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> t;
	while (t--){
		int n; cin >> n;
		if(Pri(n)) cout << n << ' ' << 1 << '\n';
		else {
			for (int i = 2, j = 0; n > 1; ++i){
				if(Pri(i) && n%i == 0){
					j = 0;
					while (n%i==0){
						j++;
						n /= i;
					}
					cout << i << ' ' << j << ' ';
				}
			}
			cout << '\n';
		}
	}
	return 0;
}
