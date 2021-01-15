#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
#define oo 10005
using namespace std;

void swap(int mat[][20], int row1, int row2, int col) {
    for (int i = 0; i < col; i++) {
        int temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

int rankOfMatrix(int mat[][20], int n, int m) {
    int rank = m;
    for (int row = 0; row < rank; row++) {
        if (mat[row][row]) {
            for (int col = 0; col < n; col++) {
                if (col != row) {
                    double mult = (double) mat[col][row] / mat[row][row];
                    for (int i = 0; i < rank; i++)
                        mat[col][i] -= mult * mat[row][i];
                }
            }
        } else {
            bool reduce = true;
            for (int i = row + 1; i < n; i++) {
                if (mat[i][row]) {
                    swap(mat, row, i, rank);
                    reduce = false;
                    break;
                }
            }
            if (reduce) {
                rank--;
                for (int i = 0; i < n; i++)
                    mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    return rank;
}

void solve() {
    int T; cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int a[20][20];
        for (int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j)
                cin >> a [i] [j];
        }
        cout << rankOfMatrix(a, n, m) << endl;
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
