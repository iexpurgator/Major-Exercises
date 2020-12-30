#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
		int n, res = 0; cin >> n;
		pair < int, int > a[n];
		bool visited[n] = {0};
	    for (int i = 0; i < n; i++) {
	        cin >> a[i].first;
	        a[i].second = i;
	    }
	    sort(a, a + n);
	    for (int i = 0; i < n; i++) {
			int sz = 0;
	        if (visited[i] || a[i].second == i)
	            continue;
			for (int j = i; !visited[j]; sz++) {
	            visited[j] = 1;
	            j = a[j].second;
	        }
	        if (sz > 0)
	            res += (sz - 1);
	    }
	    cout << res << endl;
	}
    return 0;
}
