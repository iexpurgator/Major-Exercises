#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
using namespace std;
int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
    	int n; cin >> n;
    	int a[n], imin[n], jmax[n];
    	for(int i = 0; i < n; ++i) cin >> a[i];
    	imin[0] = a[0];
    	jmax[n-1] = a[n-1];
    	for(int i = 1; i < n; ++i) imin[i] = min(a[i], imin[i-1]);
    	for(int j = n-2; j >= 0; --j) jmax[j] = max(a[j], jmax[j+1]);
    	int i = 0, j = 0, res = 0;
    	while(j < n && i < n) {
    		if(imin[i] < jmax[j]) {
    			res = max(res, j-i);
    			j++;
			} else i++;
		}
		cout << res << "\n";
    }
    return 0;
}
