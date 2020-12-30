#include <iostream>
using namespace std;

int main(int T, char* argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--){
        long n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        long m1 = a[0], m2 = 0, tmp;
        for (int i = 1; i < n; i++) {
            tmp = (m1 > m2) ? m1 : m2;
            m1 = m2 + a[i];
            m2 = tmp;
        }
        cout << ((m1 > m2) ? m1 : m2) << '\n';
    }
    return 0;
}
