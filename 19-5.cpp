#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;

		long long ans = 1;
		int r = 1;
		for (int j = m; j > m - n; j--) {
			ans *= j;
			ans /= r++;
		}
		cout << ans << "\n";
	}
	return 0;
}