#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long a, dem = 0;
	cin >> a;
	while (a > 0)
	{
		dem++;
		a /= 10;
	}
	cout << dem << endl;
	return 0;
}