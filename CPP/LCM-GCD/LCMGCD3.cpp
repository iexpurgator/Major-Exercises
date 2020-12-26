#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
#define N 10001
using namespace std;

int main (int T, char** argc) {
    ios_base :: sync_with_stdio (false);
	cin.tie (0);
    cin >> T;
	while (T--) {
        int n; cin >> n ;
        int arr[n];
	    ll MUL = 1, RES = 1;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        MUL = ((MUL%MOD) * (arr[i]%MOD)) % MOD;
	    }
	    int GCD = arr[0];
	    for (int i = 1; i < n; i++) {
	        GCD = __gcd(arr[i], GCD);
	        if(GCD == 1) break;
	    }
//		cout << MUL << " " << GCD << "\n"; // debug
	    while (GCD > 0) {
			if (GCD&1) RES = (RES*MUL) % MOD;
			GCD >>= 1;
			MUL = (MUL*MUL) % MOD;
		}
		cout << RES%MOD << '\n';
    }
    return 0;
}

