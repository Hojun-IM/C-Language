#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

unsigned int k, n, maxLen;
void bs(vector<long long>& len, unsigned maxLen);

int main() {
	fastio;
	
	cin >> k >> n;
	vector<long long> len(k);
	for (int i = 0; i < k; i++) {
		cin >> len[i];
		if(maxLen<len[i]) maxLen = len[i];
	}
	bs(len, maxLen);

	return 0;
}

void bs(vector<long long>& len, unsigned maxLen) {
	long long left = 1, right = maxLen;
	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long sum = 0;

		for (int i = 0; i < k; i++) {
			sum += (len[i] / mid);
		}
		if (sum >= n) {
			left = mid + 1;
			result = max(result, mid);
		}
		else {
			right = mid - 1;
		}
	}
	cout << result << "\n";
}