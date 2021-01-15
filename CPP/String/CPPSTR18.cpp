#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
using namespace std;

int ans = 0;
string s;

void stringRemove() {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0') {
            ans += 3;
            s.erase(i, 3);
            stringRemove();
        }
    }
}

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        ans = 0;
        cin >> s;
        stringRemove();
        cout << ans << endl;
    }
    return 0;
}
