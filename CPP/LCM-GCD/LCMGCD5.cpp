#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
#define N 10001
using namespace std;

long long GCD(long long a, long long b) {
	return !b ? a : GCD(b, a%b);
}

int main (int T, char** argc) {
    ios_base :: sync_with_stdio (false);
	cin.tie (0);
    cin >> T;
	while (T--) {
		long long n, a, b;
		cin >> n >> a >> b;
		long long k = GCD(a, b);
		while (k--) cout << n;
		cout << endl;
	}
}
