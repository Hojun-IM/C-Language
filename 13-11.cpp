#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec, tmp;
	int n, input;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec.push_back(input);
		tmp.push_back(input);
	}

	sort(tmp.begin(), tmp.end());
	tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

	for (int i = 0; i < n; i++) {
		int idx = lower_bound(tmp.begin(), tmp.end(), vec[i]) - tmp.begin();
		cout << idx << ' ';
	}

	return 0;
}