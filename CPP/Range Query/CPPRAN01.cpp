#include <bits/stdc++.h>
using namespace std;

void test() {
    int n, k, l, r, q; cin >> n >> q;
    int a[n], s[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        s[i] = (i == 0) ? a[i] : s[i-1]+a[i];
    }
    for(int i = 0; i < q; ++i) {
        cin >> l >> r;
        l--;r--;
        k = s[r]-s[l]+a[l];
        cout << k << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
