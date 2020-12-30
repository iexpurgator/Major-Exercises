#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while (T--) {
        string str;
        int k;
        cin >> str >> k;
        int n = str.length(), res = 0;
        int cnt[26] = {0};
        for (int i = 0, inc = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (cnt[str[j] - 'a'] == 0) inc++;
                cnt[str[j] - 'a']++;
                if (inc == k) res++;
                else if (inc > k) break;
            }
            memset(cnt, 0, sizeof(cnt));
            inc = 0;
        }
        cout << res << endl;
    }
    return 0;
}
