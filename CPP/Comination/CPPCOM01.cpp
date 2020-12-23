#include <iostream>
using namespace std;
int a[21], n;

void show(){
    for(int i=0;i<n;i++) cout << a[i];
    cout << ' ';
}

void tim(int i){
    for(int j=0;j<=1;j++) {
        a[i] = j;
        if(i == n-1) show();
        else tim(i+1);
    }
}

void test() {
    cin >> n;
    tim(0);
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
