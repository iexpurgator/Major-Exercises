#include <iostream>
using namespace std;
// Order Statistics 13
int main(int T, char* argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--){
        long l1, l2, i, j; cin >> l1 >> l2;
        long A[l1], B[l2];
        for(i = 0; i < l1; ++i) cin >> A[i];
        for(i = 0; i < l2; ++i) cin >> B[i];
        i = j = 0;
        long long sum1 = 0, sum2 = 0, ans = 0;
        while (i < l1 && j < l2) {
            if (A[i] < B[j]) sum1 += A[i++];
            else if (A[i] > B[j]) sum2 += B[j++];
            else {
                ans += max(sum1, sum2);
                sum1 = sum2 = 0;
                int tm = i;
                while (i < l1 && A[i] == B[j]) sum1 += A[i++];
                while (j < l2 && A[tm] == B[j]) sum2 += B[j++];
                ans += max(sum1, sum2);
                sum1 = sum2 = 0;
            }
        }
        while (i < l1) sum1 += A[i++];
        while (j < l2) sum2 += B[j++];
        cout << ans + max(sum1, sum2) << '\n';
    }
    return 0;
}