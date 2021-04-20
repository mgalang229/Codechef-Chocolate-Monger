#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int type;
			cin >> type;
			// insert the elements in a set to determine the number of unique elements
			s.insert(type);
		}
		// compare the number of remaining elements after 'x' value is subtracted from 'n'
		// from the total number of unique elements in the set, and get the minimum value
		cout << min(n - x, (int) s.size()) << '\n';
	}
	return 0;
}
