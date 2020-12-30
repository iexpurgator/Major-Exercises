#include <bits/stdc++.h>
using namespace std;

void test() {
    long n, len, cnt=0;
    int a[26] = {0};
    string s;
    cin >> s >> n;
    len = (long) s.length();
    for(long i = 0, j; i < len; ++i){
        j = s[i]-'a';
        if(a[j] == 0){
            a[j] = 1;
            cnt++;
        }
    }
    (cnt+n) >= 26 ? cout << 1 << endl : cout << 0 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
