#include <bits/stdc++.h>
#define show() for(int i = 1; i <= k; ++i) {cout << a[i];} cout << ' ';
using namespace std;

int n, k, a[25] = {0};
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		bool try_hard = true;
		cin >> n >> k;
		for(int i = 1; i <= k; ++i) a[i] = i;
		do{
			show();
			int i = k;
			while (i > 0 && a[i] == n-k+i) i--;
			if(i > 0) {
				a[i]++;
				for (int j = i+1; j <= k; j++)
					a[j] = a[i] + j - i;
			} else try_hard = false;
		} while (try_hard);
		cout << '\n';
	}
    return 0;
}
