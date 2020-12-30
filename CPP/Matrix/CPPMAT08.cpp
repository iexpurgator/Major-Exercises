#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define oo 105

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int N = 4*n, a[N][N];
        for (int i = 0, k = 1; i < N; ++i)
        	for (int j = 0; j < N; ++j) a[i][j] = k++;
        stack < int > s1, s2;
        int i = N-1, j = N-1, k = 0;
        while (k < n*2-1) {
        	for (;i >= k; --i)
        		s1.push(a[i][j]);
        	i++; j--;
        	for (;j > k; --j)
        		s1.push(a[i][j]);
        	i++; j++;
        	for (;i < N-k-1; ++i)
        		s1.push(a[i][j]);
        	i--; j++;
        	for (;j < N-k-2; ++j)
        		s1.push(a[i][j]);
        	i--; j--; k+=2;
		}
        i = 0; j = 0; k = 1;
        while (k < n*2) {
        	for (;i <= N-k; ++i)
        		s2.push(a[i][j]);
        	i--; j++;
        	for (;j < N-k ; ++j)
        		s2.push(a[i][j]);
        	i--; j--;
        	for (;i >= k; --i)
        		s2.push(a[i][j]);
        	i++; j--;
        	for (;j > k; --j)
        		s2.push(a[i][j]);
        	i++; j++; k+=2;
		}
		while (!s1.empty()) {
			cout << s1.top() << ' ';
			s1.pop();
		}
		cout << '\n';
		while (!s2.empty()) {
			cout << s2.top() << ' ';
			s2.pop();
		}
		cout << '\n';
    }
    return 0;
}
