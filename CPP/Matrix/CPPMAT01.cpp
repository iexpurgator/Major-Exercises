#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100
#define N 10001
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
        int a[MAX][MAX];
		int n, m; cin >> n >> m;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j) cin >> a[i][j];
		int prv, cur, r, c, countL = n < m ? n/2 : m/2;
		for (int i = 0; i < countL; i++) {
			r = c = i;
			prv = a[r][c++];
			for (; c < n-i; ++c){
				cur = a[r][c];
				a[r][c] = prv;
				prv = cur;
			} r++; c--;
			for (; r < m-i; ++r){
				cur = a[r][c];
				a[r][c] = prv;
				prv = cur;
			} r--; c--;
			for (; c >= i; --c){
				cur = a[r][c];
				a[r][c] = prv;
				prv = cur;
			} c++; r--;
			for (; r >= i; --r){
				cur = a[r][c];
				a[r][c] = prv;
				prv = cur;
			}
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cout << a[i][j] << ' ';
			}
		}
		cout << '\n';
	}
    return 0;
}