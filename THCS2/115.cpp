#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[100], i=0;
    cin >> n;
    while(n!=0){
      a[i] = n%10;
      n /= 10;
      i++;
    }
    int size = i-1;
    if(a[0]!=0)cout << a[0];
    for(int i = size-1;i>0;--i){
      cout << a[i];
    }
    cout << a[size] << endl;
    return 0;
}