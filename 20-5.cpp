#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	unordered_map<string, int> map;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		if (input.length() >= m) {
			map[input]++;
		}
	}
	vector<pair<string, int>> vec(map.begin(), map.end());
	sort(vec.begin(), vec.end(), compare);

	for (auto it : vec) {
		cout << it.first << "\n";
	}
	return 0;
}


bool compare(pair<string, int> &a, pair<string, int> &b) {
	if (a.second == b.second) {
		if (a.first.length() == b.first.length()) {
			return a.first < b.first;
		}
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}