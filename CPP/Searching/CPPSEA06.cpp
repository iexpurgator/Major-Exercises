#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int MAX = 1e7;

void test() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
		long a[n], mm = MAX, k;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n-1; ++i){
            for(int j = i+1; j < n; ++j){
                k = a[i] + a[j];
                if(abs(k) < abs(mm)) mm = k;
            }
        }
        cout << mm << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    test();
    return 0;
}
