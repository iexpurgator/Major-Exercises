#include <bits/stdc++.h>
using namespace std;

long long cnt(int *X, int *Y, int n, int m) {
    vector<int> suf(1005);
    long long res = 0;
    for (int i = 0; i < m; i++) suf[Y[i]]++;
    for (int i = 1000; i >= 3; i--)
        suf[i] += suf[i + 1];

    for (int i = 0; i < n; i++) {
        if (X[i] == 0)
            continue;
        else if (X[i] == 1) {
            res += suf[0];
            continue;
        }
        else if (X[i] == 2)
            res += suf[5];
        else if (X[i] == 3)
            res += suf[2] + suf[4];
        else
            res += suf[X[i] + 1];
        res += suf[0] + suf[1];
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >>T;
    while(T--){
        int m, n; cin >> n >> m;
        int *X = new int [n+5], *Y = new int [m+5];
        for(int i = 0; i < n; ++i) cin >> X[i];
        for(int i = 0; i < m; ++i) cin >> Y[i];
        cout << cnt(X, Y, n, m) << '\n';
        delete[] X, delete[] Y;
    }
}
