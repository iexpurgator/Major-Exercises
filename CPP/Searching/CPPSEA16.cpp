#include <iostream>
using namespace std;

int main(int T, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        long n1, n2, n3; cin >> n1 >> n2 >> n3;
        long long ar1[n1], ar2[n2], ar3[n3];
        for(long i = 0; i < n1; ++i) cin >> ar1[i];
        for(long i = 0; i < n2; ++i) cin >> ar2[i];
        for(long i = 0; i < n3; ++i) cin >> ar3[i];
        long i = 0, j = 0, k = 0, cnt = 0;
        while (i < n1 && j < n2 && k < n3) {
            if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
                cout << ar1[i] << " ";
                i++; j++; k++;
                cnt++;
            }
            else if (ar1[i] < ar2[j]) i++;
            else if (ar2[j] < ar3[k]) j++;
            else k++;
        }
        if(!cnt) cout << -1;
        cout << "\n";
    }
    return 0;
}
