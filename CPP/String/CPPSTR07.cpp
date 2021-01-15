#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
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

bool checkSumStrUtil(string str, int beg, int l1, int l2) {
    string a = str.substr(beg, l1);
    string b = str.substr(beg + l1, l2);
    string sum = LAN02(a, b);
    int s_len = (int) sum.size();
    if (s_len > str.size() - l1 - l2 - beg) return false;
    if (sum == str.substr(beg + l1 + l2, s_len)) {
        if (beg + l1 + l2 + s_len == str.size()) return true;
        return checkSumStrUtil(str, beg + l1, l2, s_len);
    }
    return false;
}

string isSumStr(string str) {
    int n = (int)str.size();
    for (int i = 1; i < n; i++)
        for (int j = 1; i + j < n; j++)
            if (checkSumStrUtil(str, 0, i, j))
                return "Yes";
    return "No";
}

int main(int T) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << isSumStr(s) << endl;
    }
    return 0;
}
