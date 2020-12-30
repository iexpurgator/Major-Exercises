#include <bits/stdc++.h>
using namespace std;
#define oo 105

void printdiagonal(int a[][oo], int i, int& row, int& col, bool row_inc){
    for (int j = 0; j < i; ++j) {
        cout << a[row][col] << " ";
        if (j + 1 == i) break;
        if (row_inc) ++row, --col;
        else --row, ++col;
    }
}

void upindx(int n, int m, int& row, int& col, bool& row_inc){
    if (row == 0 || col == m - 1) {
        if (col == m - 1) ++row;
        else ++col;
        row_inc = true;
    }
    else if (col == 0 || row == n - 1) {
        if (row == n - 1) ++col;
        else ++row;
        row_inc = false;
    }
}

int main(int T, char* argv[]){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while (T--) {
        int n, m;
        int a[oo][oo] = {0};
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        int row = 0, col = 0;
        int mn = min(m, n), MN = max(m, n) - 1;
        bool row_inc = false;
        for (int i = 1; i <= mn; ++i) {
            printdiagonal(a, i, row, col, row_inc);
            if (i == mn) break;
            if (row_inc) ++row, row_inc = !row_inc;
            else ++col, row_inc = !row_inc;
        }
        upindx(n, m, row, col, row_inc);
        for (int i, k = MN; k > 0; --k) {
            i = k > mn ? mn : k;
            printdiagonal(a, i, row, col, row_inc);
            upindx(n, m, row, col, row_inc);
        }
        cout << '\n';
    }
}
