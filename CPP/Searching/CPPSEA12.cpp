#include <iostream>
using namespace std;
const int MAX = 1e5+5;

void test() {
	long n, k; cin >> n >> k;
	long a[n], b[MAX] = {0};
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		b[a[i]] = 1;
	}
	for(int i = 0; i < n; ++i){
		if(a[i]+k < MAX && b[a[i]+k] == 1) {
			cout << 1 << endl;
			break;
		}
		if(i == n-1) cout << -1 << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
