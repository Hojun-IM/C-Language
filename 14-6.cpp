#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;
	string input;
	vector<string> vec, ans;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec.push_back(input);
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < m; i++) {
		cin >> input;
		if (binary_search(vec.begin(), vec.end(), input)) {
			ans.push_back(input);
		}
	}
	sort(ans.begin(), ans.end());

	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}

	return 0;
}