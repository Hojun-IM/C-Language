#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> time(n), sum(n);
	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}
	sort(time.begin(), time.end());
	sum[0] = time[0];
	int res = sum[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + time[i];
		res += sum[i];
	}
	cout << res;
	return 0;
}