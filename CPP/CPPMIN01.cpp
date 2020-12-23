#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

void minmax(int m, int s) {
    string u1 = "", u2 = "";
    int m1 = (s-1)/9, d1 = (s-1)%9, m2 = s/9, d2 = s%9;
    for(int i = 0; i < m; ++i){
        u1 += '0';
        u2 += '0';
    }
    u1[0] = '1';
    // findSmallest
    for (int i = m - 1; i >= 0; --i) {
        if (m1 > 0) u1[i] += 9;
        else if (m1 == 0) u1[i] += d1;
        m1--;
    }
    // findBigest
    for (int i = 0; i < m; ++i) {
        if (m2 > 0) u2[i] += 9;
        else if (m2 == 0) u2[i] += d2;
        m2--;
    }
    cout << u1 << ' ' << u2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s, d;
    cin >> d >> s;
    if (s == 0 && d == 1)
        cout << 0 << ' ' << 0 << '\n';
    else if (s > 9 * d || (s == 0 && d != 1))
        cout << -1 << ' ' << -1 << '\n';
    else minmax(d, s);
    return 0;
}
