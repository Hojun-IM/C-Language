#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<vector<int>> dp(n + 1, vector<int>(n + 1));
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cin >> dp[i][j];
		}
	}

	int result = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][j] + dp[i][j];
			else if (i == j) dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else dp[i][j] = max(dp[i - 1][j] + dp[i][j], dp[i - 1][j - 1] + dp[i][j]);
			result = max(result, dp[i][j]);
		}
	}
	cout << result;
	return 0;
}