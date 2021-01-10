#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n%i==0) return false;
    } return true;
}
 
void test(){
    long long n, check = 0;
    cin >> n;
    for(int i = 2; i < 20; ++i) {
        if(isPrime(i) && isPrime(pow(2, i)-1)){
            if(pow(2, 2*i)-pow(2, i) == 2*n){
                cout << 1 << endl;
                check = 1;
                break;
            }
        }
    }
    if(!check) cout << 0 << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
