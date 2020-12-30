#include <iostream>
#include <deque>
using namespace std;

int main(int T, char* argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--){
        long n, k, i; cin >> n >> k;
        long a[n+5];
        deque < long > dQ(k);
        for (i = 0; i < n ;++i) cin >> a[i];
        for (i = 0; i < k; ++i) {
            while (!dQ.empty() && a[i] >= a[dQ.back()])
                dQ.pop_back();
            dQ.push_back(i);
        }
        for (; i < n; ++i) {
            cout << a[dQ.front()] << ' ';

            while (!dQ.empty() && dQ.front() <= i - k)
                dQ.pop_front();

            while (!dQ.empty() && a[i] >= a[dQ.back()])
                dQ.pop_back();

            dQ.push_back(i);
        }
        cout << a[dQ.front()] << '\n';
    }
    return 0;
}
