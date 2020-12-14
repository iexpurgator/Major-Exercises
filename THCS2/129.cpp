#include <bits/stdc++.h>
using namespace std;
int n, m, a[100], sum;

bool nguyento(int a){
    int dem = 0;
    if(a == 2) return 2;
    for(int i = 2; i <= sqrt(a); ++i){
        if(a % i == 0) dem++;
        if(dem > 0) break;
    }
    if(dem == 0) return true;
    return false;
}

void check(int x){
    int tmp = 2;
    while(tmp < x){
        if(nguyento(tmp) && x % tmp == 0) cout << tmp << " ";
        tmp++;
    }
}
int main() {
    cin >> n;
    check(n);
    cout << endl;
    return 0;
}
