#include <bits/stdc++.h>
#define LCM ((a*b)/GCD(a,b))
#define CNT(a) (m/a - (n - 1)/a)
using namespace std;

long GCD(long a, long b){ return !b ? a : GCD(b, a%b); }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		long n, m, a, b; cin >> n >> m >> a >> b;
        cout << CNT(a) + CNT(b) - CNT(LCM) << '\n';
	}
}
