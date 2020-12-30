// ý tưởng dùng map và string stream
#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MODULO 1000000007
#define MAX 100000
using namespace std;
#define oo 10005

int main(int T, char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1, s2, wrd;
        getline(cin, s1);
        stringstream ss(s1);
        vector < string > s;
        map <string, int> ms;
        while(ss >> wrd) {
            s.push_back(wrd);
            ms[wrd] = 1;
        }
        getline(cin, s2);
        stringstream ss2(s2);
        while (ss2 >> wrd) {
            if (ms[wrd] == 1) ms[wrd] = 0;
        }
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); ++i){
            if (ms[s[i]] == 1) {
                cout << s[i] << " ";
                ms[s[i]] = 0;
            }
        } cout << endl;
    }
}
