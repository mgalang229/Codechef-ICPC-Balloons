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
		// we must check if the current sequence contains numbers from 1 to 7
		auto Complete = [](vector<int> v) {
			int cnt = 0;
			for (auto& e : v) {
				if (e >= 1 && e <= 7) {
					cnt++;
				}
			}
			return (cnt == 7);
		};
		vector<int> vec;
		for (int i = 0; i < n; i++) {
			vec.push_back(a[i]);
			if (Complete(vec)) {
				cout << i + 1 << '\n';
				break;
			}
		}
	}
	return 0;
}
