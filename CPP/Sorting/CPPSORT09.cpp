#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;

void test() {
    int n, k, cnt = 0; cin >> n >> k;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 0, n-1)
        FOR(j, i+1, n)
            if(a[i] + a[j] == k) cnt++;
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
