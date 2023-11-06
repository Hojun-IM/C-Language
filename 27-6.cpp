#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long n, k;

int main() {
	fastio;
	
	cin >> n >> k;
	long long left = 1, right = n * n;
	long long ans = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		long long cnt = 0;
		for (int i = 1; i <= n; i++) {
			cnt += min(n, (long long)mid / i);
			if (i > mid) break;
		}

		if (k > cnt) left = mid + 1;
		else {
			ans = mid;
			right = mid - 1;
		}
	}
	cout << ans << "\n";
	return 0;
}