#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        n *= n;
        vector< int > a (n, 0);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        cout << a[k-1] << '\n';
    }
    return 0;
}
