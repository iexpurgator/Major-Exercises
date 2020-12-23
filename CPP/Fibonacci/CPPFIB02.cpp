#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

const long long MAX = 1e18;

ll f[94] = {0};
ll fib(ll n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return (f[n] = 1);
    if (f[n]) return f[n];
    ll k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1)) : (2*fib(k-1) + fib(k))*fib(k);
    return f[n];
}

void test() {
    int t; cin >> t;
    while(t--){
        ll n, k = 1, FIB; cin >> n;
        for(ll i = 10; ; i *= 10, ++k)
            if(n%i == n) break;
        if(k == 19) k--;
        for(int i = k*5+2;; --i) {
            FIB = fib(i);
            if(FIB == n){
                cout << "YES" << endl;
                break;
            }
            if(FIB < n){
                cout << "NO" << endl;
                break;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
