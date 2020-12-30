#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 10000;
vector<bool> pri(N, true);

void snt() {
    int t; cin >> t;
    while(t--){
    	int a, b; cin >> a >> b;
    	for(int i = a; i <= b; ++i)
    	    if(pri[i]) cout << i << ' ';
    	cout << endl;
	}
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    pri[0] = pri[1] = false;
    for (int i = 2; i <= N; ++i)
        if (pri[i])
            for (int j = i*i; j <= N; j += i)
                pri[j] = false;

	snt();
	return 0;
}
