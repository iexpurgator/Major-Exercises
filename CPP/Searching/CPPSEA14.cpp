#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void test() {
    int t; cin >> t;
    while(t--){
        fflush(stdin);
        ll n = 0, k, stop = 0; cin >> n;
        vector<ll> a(1000001, 0);
        for(ll i = 0; i < n; ++i) {
            cin >> k;
            a[k]++;
            if(a[k] > 1 && stop == 0){
                cout << k << endl;
                stop = 1;
            }
        }
        if(stop == 0) cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
