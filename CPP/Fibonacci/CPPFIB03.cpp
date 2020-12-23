#include <iostream>
#include <vector>
using namespace std;
int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    int fib[17] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597};
    while(T--) {
        int n, k; cin >> n;
        vector < int > a;
        while(n--){
            cin >> k;
            for(int j = 0; j < 17; ++j){
                if(k == fib[j]) {
                    a.push_back(k);
                    break;
                }
            }
        }
        n = a.size();
        for(int i = 0; i < n; ++i) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}
