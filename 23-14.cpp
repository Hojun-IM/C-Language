#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> line(n + 1);
	vector<int> dp(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> line[i].first >> line[i].second;
		dp[i] = 1;
	}

	sort(line.begin(), line.end());
	
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (line[i].second > line[j].second) dp[i] = max(dp[i], dp[j] + 1);
		}
		cnt = max(dp[i], cnt);
	}
	cout << n - cnt;
	return 0;
}