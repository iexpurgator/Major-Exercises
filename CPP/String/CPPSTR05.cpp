#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        int a[26] = {0}, cnt = 0, len;
        string s;
        cin >> s;
        len = s.length();
        for(int i = 0, j; i < s.length(); ++i){
            j = s[i] - 'a';
            a[j]++;
            cnt = max(cnt, a[j]);
        }
        cout << (cnt <= (len/2)) << endl;
    }
    return 0;
}
