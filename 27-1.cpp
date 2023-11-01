#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bs(vector<int> &list, int n, int num);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, num;
	cin >> n;

	vector<int> list(n);
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	sort(list.begin(), list.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		bs(list, n, num);
	}

	return 0;
}

void bs(vector<int>& list, int n, int num) {
	int left = 0, right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (list[mid] == num) {
			cout << "1\n";
			return;
		}
		else if (list[mid] > num) right = mid - 1;
		else if (list[mid] < num) left = mid + 1;
	}
	cout << "0\n";
}