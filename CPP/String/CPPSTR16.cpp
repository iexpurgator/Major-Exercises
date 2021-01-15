#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

ll n, r, b, g, A[100], len, sum = 0;
ll fact, ans = 0;

ll factorial(int k) {
    ll res = 1;
    for (int i = 1; i <= k; i++) res *= i;
    return res;
}

void out(int p) {
    ll tmp = fact;
    for (int i = 0; i <= p; i++) tmp /= factorial(A[i]);
    ans += tmp;
}

void backTrack(int p) {
    for (int i = 0; i <= len; i++) {
        int tmp = sum, sml = A[p];
        A[p] += i;
        sum += i;
        if (p == 2 && sum == len) out(p);
        else if (p < 2 && sum <= len) backTrack(p + 1);
        sum = tmp;
        A[p] = sml;
    }
}

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        ans = 0;
        cin >> n >> r >> b >> g;
        len = n - r - b - g;
        fact = factorial(n);
        A[0] = r;
        A[1] = b, A[2] = g;
        backTrack(0);
        cout << ans << endl;
    }
}
