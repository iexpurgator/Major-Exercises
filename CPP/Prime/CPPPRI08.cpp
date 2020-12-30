#include <bits/stdc++.h>
#define x0 x=0
using namespace std;

int n, p, x;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		x0;
		cin >> n >> p;
		while (n){
			n /= p;
			x += n;
		}
		cout << x << '\n';
	}
    return 0;
}
