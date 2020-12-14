#include<bits/stdc++.h>
using namespace std;
int x;
int check(int a){
    int dem = 0;
    for(int i = 2; i <= sqrt(a); ++i)
        if(a % i == 0) dem++;
    if(dem == 0) cout << a << " ";
    if(a + 1 < x) return check(++a);
    cout << endl;
    return 0;
}

int main(){
    cin >> x;
    if(x >= 2) check(2);
    return 0;
}
