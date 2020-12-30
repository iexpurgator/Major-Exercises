#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    	int n, m; cin >> n >> m;
    	if(n > m) swap(n, m);
    	bool Pri[m+1];
    	memset(Pri, true, m+1);
    	Pri[0] = Pri[1] = false;
    	for(int i = 2; i*i <= m; ++i){
    		if(Pri[i]){
    			for(int j = i*i; j <= m; j += i)
    				Pri[j] = false;
			}
		}
		for(int i = n; i <= m; ++i)
			if(Pri[i]) cout << i << ' ';
		cout << endl;
    return 0;
}
