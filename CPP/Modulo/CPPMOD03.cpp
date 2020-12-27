#include <iostream>
using namespace std;

void test() {
	long long k;
	int n; cin >> n >> k;
	int sum = 0;
	for(int i = 1; i <= n; ++i)
		sum += (i%k);
	cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) test();
    return 0;
}
