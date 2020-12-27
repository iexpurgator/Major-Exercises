#include <iostream>
using namespace std;
#define p 1000000007
long nCrModpDP(long n, int r) {
    long C[r+1] = {0};
    C[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1]) % p;
    }
    return C[r];
}

int main(int T, char*argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--){
		long n;
		int r;
		cin >> n >> r;
		cout << nCrModpDP(n, r) << '\n';
	}
	return 0;
}
