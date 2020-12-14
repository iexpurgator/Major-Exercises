#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;
int a,b,c;
int main() {
    cin >>a>>b>>c;
    cout << max(max(a, b),c) <<endl;
    return 0;
}
