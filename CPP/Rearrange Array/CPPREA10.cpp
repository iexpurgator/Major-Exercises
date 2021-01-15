#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define MOD 1000000007
#define MAX 100000
using namespace std;

void PrintMinNumberForPattern(string arr) {
    int curr_max = 0;
    int last_entry = 0;
    int j;
    for (int i = 0; i < arr.length(); i++) {
        int noOfNextD = 0;
        switch (arr[i]) {
        case 'I':
            j = i + 1;
            while (arr[j] == 'D' && j < arr.length()) {
                noOfNextD++;
                j++;
            }
            if (i == 0) {
                curr_max = noOfNextD + 2;
                cout << ++last_entry;
                cout << curr_max;
                last_entry = curr_max;
            } else {
                curr_max = curr_max + noOfNextD + 1;
                last_entry = curr_max;
                cout << last_entry;
            }
            for (int k = 0; k < noOfNextD; k++) {
                cout << --last_entry;
                i++;
            }
            break;
        case 'D':
            if (i == 0) {
                j = i + 1;
                while (arr[j] == 'D' && j < arr.length()) {
                    noOfNextD++;
                    j++;
                }
                curr_max = noOfNextD + 2;
                cout << curr_max << curr_max - 1;
                last_entry = curr_max - 1;
            } else {
                cout << last_entry - 1;
                last_entry--;
            }
            break;
        }
    }
}

int main(int T, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        PrintMinNumberForPattern(s);
        cout << endl;
    }
    return 0;
}
