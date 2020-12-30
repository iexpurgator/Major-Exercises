#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int minO(vector < int > & nums, int n) {
    int count = 0;
    while (1) {
        int count_zero = 0;
        int i = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] & 1) break;
            else if (nums[i] == 0) count_zero += 1;
        }
        if (count_zero == n) return count;
        if (i == n) {
            count += 1;
            for (int i = 0; i < n; i++)
                nums[i] /= 2;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] & 1) {
                count += 1;
                nums[i] -= 1;
            }
        }
    }
    return count;
}

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        int n; cin >> n;
        vector < int > a (n, 0);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << minO(a, n) << endl;
    }
    return 0;
}
