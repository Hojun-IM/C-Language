#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> bag(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> bag[i].first >> bag[i].second;
	}

	vector<vector<int>>dp(n + 1, vector<int>(100001));
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (bag[j].first > i) dp[j][i] = dp[j - 1][i];
			else dp[j][i] = max(dp[j - 1][i - bag[j].first] + bag[j].second, dp[j - 1][i]);
		}
	}
	cout << dp[n][k];
	return 0;
}