#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long MAX = 1e7;

long MUL(long a, long b, long c){
	if(b == 0) return 0;
	long s = MUL(a, b>>1, c);
	return (b&1) ? (a%c + 2*(s%c)) % c : (2*(s%c)) % c;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		long a, b, c; cin >> a >> b >> c;
		cout << MUL(a, b, c) << endl;
	}
    return 0;
}
