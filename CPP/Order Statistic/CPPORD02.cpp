#include <bits/stdc++.h>
using namespace std;

void test() {
    int n, k; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        k = (i == 0) ? a[i] : max(k, a[i]);
    }
    cout << k << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
