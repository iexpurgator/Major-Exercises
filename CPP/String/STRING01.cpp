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
	string s, w;
	getline(cin, s);
	cin >> w;
	stringstream si(s);
	do{
		string wi;
		si >> wi;
		if(wi != w) cout << wi << ' ';
	} while(si);
	cout << endl;
    return 0;
}
