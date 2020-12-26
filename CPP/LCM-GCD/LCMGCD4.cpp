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
        ll a, num = 0, n; cin >> a;
        string b; cin >> b;
        n = b.length();
        for (int i = 0; i < n; ++i)
			num = (num*10 + b[i] - '0') % a;
		cout << __gcd(a, num) << '\n';
    }
    return 0;
}
