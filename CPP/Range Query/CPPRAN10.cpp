#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >>T;
    while(T--) {
    	int n; cin >> n;
    	int arr[n], ans = 0;
    	for (int i = 0; i < n ; ++i) cin >>arr[i];
    	for (int i = 0, j = n-1; i <= j; ) {
    		if (arr[i] == arr[j]) {
    			i++;
    			j--;
    		} else if (arr[i] > arr[j]) {
    			j--;
    			arr[j] += arr[j+1] ;
    			ans++;
    		} else {
    			i++;
    			arr[i] += arr[i-1];
    			ans++;
    		}
    	}
    	cout << ans << '\n';
    }
	return 0;
}
