#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void test() {
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        ll a[1005];
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a+n);
        for(int i = n-1; i >= n-k; --i) cout << a[i] << ' ';
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
