#include <bits/stdc++.h>
using namespace std;
#define R 20
#define C 20

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int mat[R][C] = {0}, a[R][C] = {0};
    	int n, m; cin >> n >> m;
	    int b[m] = {0}, res = 0;
	    for(int i = 0; i < n; ++i)
	        for(int j = 0; j < m; ++j)
	            cin >> mat[i][j];
	    //precompute
	    for (int i = n - 1; i >= 0; i--)
	        for (int j = 0; j < m; ++j)
	            a[i][j] = (mat[i][j] == 0) ? 0 : a[i + 1][j] + 1;
	    //swap colum
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < m; ++j)
	            b[j] = a[i][j];
	        sort(b, b + m);
	        for (int i = 0; i < m; ++i)
	            res = (res > b[i]*(m - i)) ? res : b[i]*(m - i);
	    }
	    cout << res << endl;
    }
    return 0;
}
