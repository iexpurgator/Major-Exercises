#include<iostream>
using namespace std;
#define P 1000000007

int main(){
    int T; cin >> T;
    while(T--) {
    	int n,k;
    	cin >> n >> k;
    	long long a[n] = {0}, sum = 0;
    	for(int i=0; i<n; ++i) cin >> a[i];
    	if(k > 0) {
        	for(int i=0; i<n; ++i)
            		sum = ((sum * k)%P + a[i])%P;
    	}
    	cout << sum << endl;
    }
    return 0;
}
