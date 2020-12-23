#include <bits/stdc++.h>
#define show() for(int i = 1; i <= n; ++i) {cout << a[i];} cout << ' ';
using namespace std;
int n, a[25] = {0};

bool sinhtohop(){
	int i = n-1;
	while (i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[i] > a[k]) k--;
		swap(a[i], a[k]);
		for(i++, k = n;i <= k; i++, k--)
			swap(a[i], a[k]);
		return true;
	} else return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		bool ok = true;
		cin >> n;
		for(int i = 1; i <= n; ++i) a[i] = i;
		do{
			show();
			ok = sinhtohop();
		} while (ok);
		cout << '\n';
	}
    return 0;
}
