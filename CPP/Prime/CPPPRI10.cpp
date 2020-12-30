#include <bits/stdc++.h>
#define P 1000000007
using namespace std;

int n2s (int n){
	int s = 0;
	for(; n != 0; n /= 10)
        s += (n%10);
    return s;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, s1 = 0, s2 = 0;
		cin >> n;
		s1 = n2s(n);
		for(int i = 2; i <= n; i++){
	        while(n % i == 0){
	            if(i == n && s2 == 0) s2 = -1;
	            n /= i;
	            s2 = s2 + ((i < 9) ? i : n2s(i));
	        }
	    }
	    s1 == s2 ? cout << "YES" << endl : cout << "NO" << endl;
	}
    return 0;
}
