#include <iostream>
#include <algorithm>
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
    	long n, k; cin >> n >> k;
    	long a[n];
    	for(int i = 0; i < n; ++i) cin >> a[i];
    	sort(a, a+n);
		cout << a[k-1] << '\n';
    }
    return 0;
}
