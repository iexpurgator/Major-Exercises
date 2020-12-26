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
		long long a, b, c, n;
		cin >> a >> b >> c >> n;
		long long	ab = (a*b)/__gcd(a, b),
					abc = (ab*c)/__gcd(ab, c),
					ten_pow = pow(10, n-1),
					x = ten_pow % abc;
		if (x == 0) x = ten_pow;
		else {
			x = ten_pow + abc - x;
			x = x < (ten_pow*10) ? x : -1;
		}
		cout << x << endl;
	}
}

