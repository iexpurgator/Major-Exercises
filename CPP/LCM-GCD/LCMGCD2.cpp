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
	    long long a, lcm;
    	cin >> a;
    	lcm = a;
    	for (int i = a-1; i > 0; --i)
    		lcm = lcm * i / GCD(lcm, i);
	    cout << lcm << endl;
    }
    return 0;
}
