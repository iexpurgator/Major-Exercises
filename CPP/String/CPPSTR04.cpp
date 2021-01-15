#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
using namespace std;

string s;

int proc(int k) {
    int dem = 0;
    for (int i = 0; i < s.length(); i++) {
        int n = 0;
        for (int j = i; j < s.length(); j++) {
            n = n * 10 + s[j] - '0';
            n = n % k;
            if (n == 0) dem = dem + 1;
        }
    }
    return dem;
}

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        cin >> s;
        cout << proc(8) - proc(24) << endl;
    }
    return 0;
}
