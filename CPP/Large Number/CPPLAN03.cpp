#include <bits/stdc++.h>

#define ll long long int
#define oo 100000
using namespace std;

string LAN03(string a, string b){
    int len_a = a.size();
    int len_b = b.size();
    if (len_a == 0 || len_b == 0) return "0";
    vector<int> result(len_a + len_b, 0);
    int i_a = 0;
    int i_b = 0;
    for (int i = len_a - 1; i >= 0; i--) {
        int carry = 0;
        int n_a = a[i] - '0';
        i_b = 0;
        for (int j = len_b - 1; j >= 0; j--) {
            int n_b = b[j] - '0';
            int sum = n_a * n_b + result[i_a + i_b] + carry;
            carry = sum / 10;
            result[i_a + i_b] = sum % 10;
            i_b++;
        }
        if (carry > 0) result[i_a + i_b] += carry;
        i_a++;
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0) i--;
    if (i == -1) return "0";
    string s = "";
    while (i >= 0) s += std::to_string(result[i--]);
    return s;
}

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        cout << LAN03(a, b) << '\n';
    }
}
