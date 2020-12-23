#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int n, mp[10];
string s;
int main (int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '4') {
                mp[3] += 1;
                mp[2] += 2;
            } else if (s[i] == '6') {
                mp[5] += 1;
                mp[3] += 1;
            } else if (s[i] == '8') {
                mp[7] += 1;
                mp[2] += 3;
            } else if (s[i] == '9') {
                mp[7] += 1;
                mp[3] += 2;
                mp[2] += 1;
            } else if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') {
                mp[s[i] - '0'] += 1;
            }
        }
        for (int i = 9; i >= 0; i--) {
            while (mp[i] > 0) {
                cout << i;
                mp[i]--;
            }
        }
        cout << endl;
    }
    return 0;
}
