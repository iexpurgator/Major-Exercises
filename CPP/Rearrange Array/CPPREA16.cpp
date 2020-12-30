#include <bits/stdc++.h>
using namespace std;
/* CPPREA16 - Re-arrang Array 16 */
// Largest smaller number possible using only one swap operation
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		string str; cin >> str;
		int n = str.length(), index = -1, gud = -1;
    	for(int i = n - 2; i >= 0; i--) {
			if(str[i] > str[i+1]) {
				index = i;
				break;
			}
		}
    	for(int i = n - 1; i > index; i--)
			if(str[i] < str[index])
				if (gud == -1 || str[i] >= str[gud]) gud = i;
		if(gud != -1 && index != -1) {
			swap(str[index], str[gud]);
			cout << str << endl;
		} else cout << "-1" << endl;
	}
    return 0;
}
