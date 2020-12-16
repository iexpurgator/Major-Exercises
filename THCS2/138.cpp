#include <iostream>
using namespace std;
int n, m, a[100], sum;

int giaithua(int a){
    int gt = 1;
    for(int i = 1; i <= a; ++i){
        gt *= i;
    }
    return gt;
}

void check(int x){
    int tmp = x;
    sum = 0;
    while(tmp > 0){
        sum += giaithua(tmp % 10);
        tmp /= 10;
    }
    if(x == 0) sum = 1;
    if(sum == x) cout << x << " ";
}
int main() {
    cin >> n >> m;
    if(n>m)swap(n, m);
    for(int i = n; i <= m; ++i){
        check(i);
    }
    cout << endl;
    return 0;
}
