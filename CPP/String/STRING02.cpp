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
    	string s, w, hodem = "";
    	getline(cin, s);
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	stringstream si(s);
    	int n = 0;
    	do {
    		si >> w;
    		hodem += w[0];
    		n++;
		} while(si);
		hodem.erase(n-2, 2);
		cout << w << hodem << "@ptit.edu.vn" << endl;
    return 0;
}
