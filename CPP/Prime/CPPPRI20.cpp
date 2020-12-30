#include <iostream>
#include <math.h>
using namespace std;

int GCD(int a, int b){ return !b ? a : GCD(b, a%b);}

int Prime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return 0;
    return 1;
}

int main() {
    int T; cin >> T;
    while(T--) {
        int x; cin >> x;
        if(x <= 1000)
            if( x == 3 || x == 4 || x == 6) cout << 1 << '\n';
            else cout << 0 << '\n';
        else {
            int cnt = 0;
            for (int i=1; i<=x; i++)
                if (GCD(i, x)==1) cnt++;
            cout << Prime(cnt) << '\n';
        }
    }
    return 0;
}
