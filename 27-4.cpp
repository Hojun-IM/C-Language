#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

unsigned int n, m, maxLen;
void bs(vector<long long>& height, unsigned maxLen);

int main() {
	fastio;
	
	cin >> n >> m;

	vector<long long> height(n);
	for (int i = 0; i < n; i++) {
		cin >> height[i];
		if(maxLen<height[i]) maxLen = height[i];
	}
	bs(height, maxLen);

	return 0;
}

void bs(vector<long long>& height, unsigned maxLen) {
	long long left = 1, right = maxLen;
	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long sum = 0;

		for (int i = 0; i < n; i++) {
			if (height[i] > mid) sum += (height[i] - mid);
		}
		if (sum >= m) {
			left = mid + 1;
			result = mid;
		}
		else {
			right = mid - 1;
		}
	}
	cout << result << "\n";
}