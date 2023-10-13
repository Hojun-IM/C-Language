#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int> v, vector<int> dp, int n);

int main() {
	int n;
	cin >> n;
	
	vector<int> v(n), dp(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		dp[i] = v[i];
	}
	cout << maxSum(v, dp, n);
	return 0;
}

int maxSum(vector<int> v, vector<int> dp, int n) {
	int sum = dp[0];
	for(int i = 1; i < n; i++) {
		dp[i] = max(dp[i], dp[i - 1] + v[i]);
		if (dp[i] > sum) sum = dp[i];
	}
	return sum;
}