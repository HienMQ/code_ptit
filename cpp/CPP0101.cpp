#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (ll)n*(n + 1)/2 << '\n';
	}
	return 0;
}
