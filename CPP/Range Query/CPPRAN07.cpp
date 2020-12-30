#include <bits/stdc++.h>
#define ull unsigned long long long
#define ll long long long
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

long lenSum (long a[], long n, long x) {
   long i = 0, j = 0, sum = 0, minlen = n+1;
   while (j < n) {
       while(j < n && sum <= x) {
           sum += a[j];
           ++j;
       }
       if (sum < x) break;
       while(i < j && sum > x) {
           sum -= a[i];
           ++i;
       }
       minlen = min(minlen, j - i + 1);
   }
   return minlen == n+1 ? -1 : minlen;
}

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        long n, k; cin >> n >> k;
        long a[n];
        for (long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << lenSum (a, n, k) << endl;
    }
    return 0;
}
