#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     int t;
     cin >> t;
     while(t--){
         int n, a[1005];
         cin >> n;
         for(int i = 0; i < n; ++i) cin >> a[i];
         sort(a, a+n);
         for(int i = 0; i < n/2; ++i) cout << a[n-i-1] << ' ' << a[i] << ' ';
         if(n&1) cout << a[(n/2)];
         cout << endl;
     }
    return 0;
}
