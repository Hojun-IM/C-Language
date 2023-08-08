#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	int n, m, input;
	unordered_map<int, int> map;
	vector<int> vec1, vec2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec1.push_back(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		vec2.push_back(input);
	}

	for (int i = 0; i < vec1.size(); i++) {
		map[vec1[i]]++;
	}

	for (int i = 0; i < vec2.size(); i++) {
		cout << map[vec2[i]] << " ";
	}

	return 0;
}