#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;

	deque<pair<int, int>> d;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		d.push_back(make_pair(input,i+1));
	}

	while (true) {
		int now = d.front().first;
		cout << d.front().second << " ";
		d.pop_front();
		if (d.empty()) break;
		if (now > 0) {
			for (int i = 0; i < now - 1; i++) {
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else {
			for (int i = now; i < 0; i++) {
				d.push_front(d.back());
				d.pop_back();
			}
		}
	}
	return 0;
}