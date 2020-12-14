#include<bits/stdc++.h>
using namespace std;
int a;
void check(){
	if(a % 10 == 0) a /= 10;
    while(a>0){
        cout << a % 10;
        a /= 10;
    }
    cout << endl;
}

int main(){
    cin >> a;
    check();
    return 0;
}