#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;
int a,b,c;
int main() {
    cin >>a>>b>>c;
    if(a%b==0 && a%c==0) cout << 1;
    else cout << 0;
    return 0;
}
