#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m, cnt = 0;
	string input;
	vector<string> vec1, vec2, ans;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> input;
		vec1.push_back(input);
	}
	sort(vec1.begin(), vec1.end());

	for (int i = 0; i < m; i++) {
		cin >> input;
		vec2.push_back(input);
	}

	for (int i = 0; i < m; i++) {
		if (binary_search(vec1.begin(), vec1.end(), vec2[i])) cnt++;
	}
	cout << cnt;
	return 0;
}