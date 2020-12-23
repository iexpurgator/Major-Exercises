#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        string s; cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); ++i)
            sum += s[i] - '0';
        if (sum > 0 && sum%9 == 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}
