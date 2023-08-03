#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, input;
	vector<int> vec, tmp, ans;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec.push_back(input);
	}
	sort(vec.begin(), vec.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		tmp.push_back(input);
	}

	for (int i = 0; i < m; i++) {
		int cnt = 0;
		if (binary_search(vec.begin(), vec.end(), tmp[i])) {
			cnt++;
		}
		ans.push_back(cnt);
	}

	for (int i = 0; i < m; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}