#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, m;
	cin >> n;

	deque<int> d;
	vector<int> flag;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		flag.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (flag[i] == 0) d.push_back(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		d.push_front(input);
		cout << d.back() << " ";
		d.pop_back();
	}

	return 0;
}