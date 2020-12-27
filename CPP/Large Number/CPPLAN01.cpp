#include <bits/stdc++.h>

#define ll long long int
#define oo 100000
using namespace std;

string LAN01(string a, string b) {
    string res = "";
    int carry = 0, len;
    while (a.size() != b.size())
        if (a.size() < b.size()) a = '0' + a;
        else b = '0' + b;
    len = a.size() - 1;
    if (a < b) swap(a, b);
    for (int i = len; i >= 0; --i) {
        int EBX = int(a[i] - '0') - int(b[i] - '0') - carry;
        if (EBX < 0) res = char(EBX + 10 + '0') + res, carry = 1, (void) 0;
        else res = char(EBX + '0') + res, carry = 0, (void) 0;
    }
    return res;
}

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        cout << LAN01(a, b) << '\n';
    }
}
