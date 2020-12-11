#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector < bool > K (M, 0);
        vector < ll > A (N,0), B (M, 0);
        vector < ll > sa (N,0), sb (M, 0);
        map < ll, ll > nmap;
        for (int i = 0; i < N; i++) {
			cin >> A[i];
            if(i == 0) sa[i] = A[i];
            else sa[i] = A[i] + sa[i-1];
            nmap[A[i]] = i;
		}
        for (int i = 0; i < M; i++) {
            cin >> B[i];
            if(i == 0) sb[i] = B[i];
            else sb[i] = B[i] + sb[i-1];
            if (nmap[B[i]] != NULL) K[i] = 1;
		}
        // for (int i = 0; i < N; i++) {
        //     cout << sa[i] << " ";
		// } cout << endl;
        // for (int i = 0; i < M; i++) {
        //     cout << sb[i] << " ";
		// } cout << endl;
        // for (int i = 0; i < M; i++) {
        //     cout << K[i] << " ";
		// } cout << endl;
        int s = 0, res = 0;
        for (int i = M - 1; i >= 0; --i) {
            if (K[i]) s = max(sa[N-1] - sa[nmap[B[i]]] + sb[i], sa[nmap[B[i]]] + sb[M-1] - sb[i]);
            if (s > res) res = s;
        }
        cout << res << endl;
    }
    return 0;
}
/*
3
5 4
2 3 7 10 12
1 5 7 8 
5 5
2 3 7 7 10
1 5 7 8 99
6 6
2 3 7 7 11 105
1 5 7 8 11 99

1
8 9
2 3 7 7 11 12 25 105
1 5 7 8 11 24 25 30 99
*/
// max = 1+5+7+8+11+105 = 137