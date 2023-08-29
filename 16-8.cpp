#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	vector<int> vec;
	while (!q.empty()) {
		int i = k - 1;
		while (i--) {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		vec.push_back(q.front());
		q.pop();
	}

	cout << "<";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if (i == vec.size() - 1) break;
		cout << ", ";
	}
	cout << ">";

	return 0;
}