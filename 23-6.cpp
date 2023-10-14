#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int RGB(vector<vector<int>> dp, int n);

int main() {
	int n;
	cin >> n;
	
	vector<vector<int>> dp(n + 1, vector<int>(n));
	cout << RGB(dp, n);
	return 0;
}

int RGB(vector<vector<int>> dp, int n) {
	for (int i = 1; i <= n; i++) {
		cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}
	return min(dp[n][0], min(dp[n][1], dp[n][2]));
}