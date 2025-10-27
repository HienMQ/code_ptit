#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	char c;
	while (t--) {
		cin >> c;
		if ('a' <= c && c <= 'z')
			cout << (char)(c - 'a' + 'A') << '\n';
		else if ('A' <= c && c <= 'Z')
			cout << (char)(c - 'A' + 'a') << '\n';
	}
	return 0;
}
