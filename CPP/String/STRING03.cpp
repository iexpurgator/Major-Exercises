#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	string s, w;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin() ,::tolower);
	for(int i = 0; i < s.length(); ++i)
		if(i == 0 || s[i-1] == ' ') s[i] = toupper(s[i]);
	stringstream si(s);
	while(si >> w);
	int n = w.length() + 1;
	transform(w.begin(), w.end(), w.begin(),::toupper);
	s.erase(s.length()-n, n);
	cout << s << ", " << w << endl;
    return 0;
}
