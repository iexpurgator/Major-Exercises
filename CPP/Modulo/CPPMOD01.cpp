#include <iostream>
using namespace std;
#define ll long long int

long long power(long long x, long long y, const long long p = 1000007) {
    long long res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res*x) % p;
        y >>= 1;
        x = (x*x) % p;
    }
    return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long long a, b, p;
		cin >> a >> b >> p;
		cout << power(a, b, p) << endl;
	}
    return 0;
}
