#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define oo 100000

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string str, ss;
        cin >> str >> ss;
        int l1 = str.length(), l2 = ss.length();
        if (l1 < l2) {
            cout << -1;
            continue;
        }
        int index = -1, minl = oo, a[256] = {}, b[256] = {}, count = 0;
        for (int i = 0; i < l2; i++) a[ss[i]]++;
        for (int i = 0, og = 0, lenmin; i < l1; i++) {
            b[str[i]]++;
            if (a[str[i]] != 0 && b[str[i]] <= a[str[i]])
                count++;
            if (count == l2) {
                while (b[str[og]] > a[str[og]] || a[str[og]] == 0) {
                    if (b[str[og]] > a[str[og]])
                        b[str[og]]--;
                    og++;
                }
                lenmin = i - og + 1;
                if (minl > lenmin) {
                    minl = lenmin;
                    index = og;
                }
            }
        }
        if (index > -1)
            while(minl--) cout << str[index++];
        else cout << -1;
        cout << '\n';
    }
    return 0;
}
