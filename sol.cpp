#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// we must find the set wherein numbers from 1 to 7 are included
		// initialize a set with numbers from 1 to 7 and whenever the loop
		// encounters a number within this range (inclusive), then we remove
		// it from this set, also, don't forget to count the problems that will be solved
		set<int> s = {1, 2, 3, 4, 5, 6, 7};
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (s.find(a[i]) != s.end()) {
				s.erase(s.find(a[i]));
			}
			cnt++;
			if ((int) s.size() == 0) {
				break;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
