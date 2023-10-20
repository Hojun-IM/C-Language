#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> v(n + 1), dp(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (v[i] > v[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(dp[i], ans);
	}
	cout << ans;
	return 0;
} 