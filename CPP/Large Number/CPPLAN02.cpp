#include <bits/stdc++.h>

#define ll long long int
#define oo 100000
using namespace std;

string LAN02(string a, string b) {
    string res = "";
    int carry = 0, len;
    while (a.size() != b.size())
        if (a.size() < b.size()) a = '0' + a;
        else b = '0' + b;
    len = a.size() - 1;
    for (int i = len; i >= 0; --i) {
        int temp = int(a[i] - '0') + int(b[i] - '0') + carry;
        res = char(temp % 10 + '0') + res;
        carry = temp / 10;
    }
    if (carry > 0) res = char(carry + '0') + res;
    return res;
}

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        cout << LAN02(a, b) << '\n';
    }
}
