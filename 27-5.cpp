#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

unsigned int n, c;
void bs(vector<long long>& house);

int main() {
	fastio;
	
	cin >> n >> c;

	vector<long long> house(n);
	for (int i = 0; i < n; i++) {
		cin >> house[i];
	}
	sort(house.begin(), house.end());
	bs(house);

	return 0;
}

void bs(vector<long long>& house) {
	long long left = 1, right = house[n - 1] - house[0];
	long long result, ans = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cur = house[0];
		result = 1;

		for (int i = 1; i < n; i++) {
			if (house[i] - cur >= mid) {
				result++;
				cur = house[i];
			}
		}
		if (result >= c) {
			left = mid + 1;
			ans = max(ans, mid);
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans << "\n";
}