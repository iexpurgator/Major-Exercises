#include <iostream>
using namespace std;

int main(int T, char*argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--) {
        int n, x, loc = 0, MAX = -1e5;
        cin >> n >> x;
        int a[n+1];
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0, s; i <= n-x; ++i) {
            s = 0;
            for(int j = i; j < i+x; ++j) s += a[j];
            if(s > MAX){
                MAX = s;
                loc = i;
            }
        }
        for(; x > 0; --x) cout << a[loc++] << ' ';
        cout << '\n';
	}
	return 0;
}
