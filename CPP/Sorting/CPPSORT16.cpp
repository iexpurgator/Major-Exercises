#include <iostream>
#include <vector>
#define oo 100001
using namespace std;

int main(int T, char* argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while(T--){
    	vector <long> a(oo, 0);
    	long n, cnt = 0; cin >> n;
    	for(int i = 0, j; i < n ; ++i){
    		cin >> j;
    		a[j]++;
    		cnt = max(cnt, a[j]);
		}
		while(cnt){
			for(int i = 0; i < oo; ++i)
				if(a[i] == cnt) while(a[i]--) cout << i << ' ';
			cnt--;
		} cout << '\n';
	}
    return 0;
}
