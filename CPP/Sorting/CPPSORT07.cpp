#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        long n; cin >> n;
        long a[n], b[n], c[n];
        for(long i = 0; i < n; ++i){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        for(long i = 0; i < n; ++i)
            c[i] = (a[i] == b[i]);
        for(int i = 0; i < n; ++i) {
            if(!c[i]) {
                cout << i+1 << ' ';
                break;
            }
        }
        for(int i = n-1; i >= 0; --i) {
            if(!c[i]) {
                cout << i+1 <<'\n';
                break;
            }
        }
    }
    return 0;
}
