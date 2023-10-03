#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> time;
	for (int i = 0; i < n; i++) {
		int input1, input2;
		cin >> input1 >> input2;
		time.push_back(make_pair(input1, input2));
	}
	sort(time.begin(), time.end(), compare);
	int cnt = 1;
	int end = time[0].second;
	for (int i = 1; i < n; i++) {
		if (time[i].first >= end) {
			cnt++;
			end = time[i].second;
		}
	}
	cout << cnt;
	return 0;
}

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}