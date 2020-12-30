#include <bits/stdc++.h>
#define N 100001
using namespace std;

bool mountainArr(int A[], int be, int en) {
    if (en - be < 2) return true;
	en++; be++;
    int i = be;
    while (i < en) {
        if (A[i - 1] <= A[i]) i++;
        else break;
    }
    if (i == en || i == be) return false;
    while (i < en) {
        if (A[i - 1] >= A[i]) i++;
        else break;
    }
    if (i == en) return true;
    else return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int n, a, b;
		cin >> n;
		int m[n];
		for(int i = 0; i < n; ++i) cin >> m[i];
		cin >> a >> b;
		cout << (mountainArr(m, a, b) ? "Yes" : "No") << '\n';
	}
}
