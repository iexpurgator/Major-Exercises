#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int T, char *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--) {
        int n; cin >> n;
        // fflush(stdin);
        cin.ignore();
        int a[10] = {0};
        string s;
        getline(cin, s);
        for(int i = 0, j; i < s.length(); ++i){
            j = s[i] - '0';
            if(0 <= j && j <= 9) a[j] = 1;
        }
        for(int i = 0; i < 10; ++i)
            if(a[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
