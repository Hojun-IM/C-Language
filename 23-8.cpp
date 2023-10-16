#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> dp(n + 1), num(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}

	dp[1] = num[1];
	dp[2] = num[1] + num[2];
	dp[3] = max(num[1] + num[3], num[2] + num[3]);

	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + num[i], dp[i - 3] + num[i - 1] + num[i]);
	}
	cout << dp[n];

	return 0;
}