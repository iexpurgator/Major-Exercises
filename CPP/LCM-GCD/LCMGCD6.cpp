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
        ll n, m; cin >> n >> m;
        bool res;
	    int total_sum = (n * (n + 1)) / 2;
	    int sum_s1 = (total_sum + m) / 2;
	    int sum_s2 = total_sum - sum_s1;
	    if (total_sum < m)
	    	res = false;
	    else if (sum_s1 + sum_s2 == total_sum &&  sum_s1 - sum_s2 == m)
	        res = (__gcd(sum_s1, sum_s2) == 1);
	    else res = false;
		cout << (res ? "Yes" : "No") << '\n';
    }
    return 0;
}

