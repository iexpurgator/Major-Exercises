#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;

void test() {
	long long n, can, sum = 1;
	cin >> n;
	switch (n){
		case 6:
		case 28:
		case 496:
		case 8128:
		case 33550336:
		case 8589869056:
		case 137438691328:
		case 2305843008139952128:
			cout << 1 << endl;
			break;
		default:
			cout << 0 << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
