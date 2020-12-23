#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;
const long long LENGTH = 1e19;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long f[1001];
    f[0] = 0; f[1] = f[2] = 1;
    for(int i = 3; i <= 1000; i += 2){
    	f[i] = (f[i-1] + f[i-2])%MODULO;
    	f[i+1] = (f[i] + f[i-1])%MODULO;
	}
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	cout << f[n] << endl;
	}
    return 0;
}
