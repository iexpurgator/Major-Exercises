#include <iostream>
using namespace std;

long long replaceDig(long long x, long long from, long long to) {
    long long result = 0, multiply = 1;
    while (x > 0){
        long long reminder = x % 10;
        if (reminder == from) result = result + to * multiply;
        else result = result + reminder * multiply;
        multiply *= 10;
        x /= 10;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while(T--) {
    	long long x1, x2; cin >> x1 >> x2;
    	long long minSum = replaceDig(x1, 6, 5) + replaceDig(x2, 6, 5);
		long long maxSum = replaceDig(x1, 5, 6) + replaceDig(x2, 5, 6);
    	cout << minSum << ' ' << maxSum << '\n';
    }
    return 0;
}
