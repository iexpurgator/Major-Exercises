#include <bits/stdc++.h>
using namespace std;
int UCLN,BCNN;

int ucln(int a, int b) {
    int du;
    while(b != 0) {
        du = a % b;
        a = b;
        b = du;
    }
    UCLN = a;
    return UCLN;
}

int bcnn(int a, int b) {
    BCNN= (a*b)/UCLN;
    return BCNN;
}

int main() {
  int a,b;
  cin >> a >> b;
  ucln(a,b);
  bcnn(a,b);
  cout << UCLN << " " << BCNN <<endl;
  return 0;
}