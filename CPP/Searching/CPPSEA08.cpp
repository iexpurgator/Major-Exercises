#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void test() {
    int t; cin >> t;
    while(t--){
        int n, k, cnt = 0; cin >> n >> k;
        ll a[1005];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == k) cnt++;
        }
        cnt > 0 ? cout << cnt << endl : cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
