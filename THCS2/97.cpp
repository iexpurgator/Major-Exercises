#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	if(a <= 0 || b <= 0) cout << 0 << endl;
	else cout << (a+b)*2 << " " << a*b;
	return 0;
}