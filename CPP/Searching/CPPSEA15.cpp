#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        int n, k, x; cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> k >> x;
        // solve
        priority_queue < int, vector < int > , greater < int > > q;
        int l, r;
        l = lower_bound(a, a + n, x) - a;
        r = upper_bound(a, a + n, x) - a;
        while (a[l] == x && l >= 0)
            l--;
        while (a[r] == x && r < n)
            r++;
        while (k > 0) {
            if (l >= 0)
                q.push(a[l--]), k--, (void) 0;
            if (r < n)
                q.push(a[r++]), k--, (void) 0;
            if (l < 0 && r >= n)
                break;
        }
        while (!q.empty()) {
            cout << q.top() << " ";
            q.pop();
        }
        cout << endl;
    }
}
