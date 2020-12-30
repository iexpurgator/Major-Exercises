#include <bits/stdc++.h>
using namespace std;
#define oo 1000
#define MAX 25

long k, cnt;
void tryMove(long row, long col, long m[][MAX], long n, long s) {
    if (row == n || col == n) return;
    if (row == n - 1 && col == n - 1 && s == k) {
        cnt++;
        return;
    }
    if (row +1 < n || col < n){
        tryMove(row + 1, col, m, n, s + m[row+1][col]);
    }
    if (row < n || col + 1 < n) {
        tryMove(row, col + 1, m, n, s + m[row][col+1]);
    }
}

int main(){
    int t; cin >> t;
    while (t--) {
        cnt = 0;
        long n, s, m[MAX][MAX];
        cin >> n >> k;
        for(long i = 0; i < n; ++i)
            for(long j = 0; j <n; ++j)
                cin >> m[i][j];
        s = m[0][0];
        tryMove(0, 0, m, n, s);
        cout << cnt << '\n';
    }
    return 0;
}
