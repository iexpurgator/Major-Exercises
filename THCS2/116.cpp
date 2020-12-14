#include<bits/stdc++.h>
using namespace std;
int a;
void check(){
    int sum = 0;
    while(a>0){
        sum += (a % 10);
        a /= 10;
    }
    cout << sum << endl;
}

int main(){
    cin >> a;
    check();
    return 0;
}