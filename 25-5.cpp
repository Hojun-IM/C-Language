#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, min = 1000000001, min_idx = 0;
	cin >> n;

	vector<int> road(n-1), oil(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> road[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> oil[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (min > oil[i]) {
			min = oil[i];
			min_idx = i;
		}
	}

	int total = 0;
	for (int i = 0; i < n - 1; i++) {
		if (i == min_idx) {
			int left = 0;
			for (int j = i; j < road.size(); j++) left += road[j];
			total += (left * oil[i]);
			break;
		}
		else total += (road[i] * oil[i]);
	}
	cout << total;
	return 0;
}