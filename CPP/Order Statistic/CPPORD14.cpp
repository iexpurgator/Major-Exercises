#include <bits/stdc++.h>
using namespace std;
#define oo 10000000
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >>T;
    while(T--){
        long n; cin >> n;
        long a[n], b[n];
        for (long i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        map < long, long > mp;
        for (long i = 0; i < n-1; ++i)
            mp[b[i]] = b[i+1];
        for (long i = 0; i < n; ++i) {
            if (a[i] == b[n-1]) cout << "_ ";
            else cout << mp[a[i]] << ' ';
         }
		cout << '\n';
    }
}
