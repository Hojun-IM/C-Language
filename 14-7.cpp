#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, input;
	vector<int> vec1, vec2, ans1, ans2;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec1.push_back(input);
	}
	for (int i = 0; i < m; i++) {
		cin >> input;
		vec2.push_back(input);
	}
	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	for (int i = 0; i < n; i++) {
		if (binary_search(vec2.begin(), vec2.end(), vec1[i])) {
			continue;
		}
		ans1.push_back(vec1[i]);
	}

	for (int i = 0; i < m; i++) {
		if (binary_search(vec1.begin(), vec1.end(), vec2[i])) {
			continue;
		}
		ans2.push_back(vec2[i]);
	}

	cout << ans1.size() + ans2.size();

	return 0;
}