#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
using namespace std;

void test() {
    long n; cin >> n;
    vector<long> a(n, 0);
    FOR(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    FOR(i, 0, n) cout << a[i] << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
