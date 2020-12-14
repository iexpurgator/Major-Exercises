#include<bits/stdc++.h>
using namespace std;
int a;
void check(){
    int cuoi = a % 10;
    int tmp = 0;
    while(a>0){
        tmp = a %10;
        a/=10;
    }
    cout << tmp << " " << cuoi << endl;
}

int main(){
    cin >> a;
    check();
    return 0;
}