#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define rFOR(i, a, b) for (ll i = b-1; i >= a; --i)
using namespace std;
const int MODULO = 1e9+7;

void test(){
    int t; cin >> t;
    while(t--){
        long n, k, a[100005];
        cin >> n >> k;
        FOR(i, 0, n) cin >> a[i];
        sort(a, a+n);
        cout << a[k-1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
