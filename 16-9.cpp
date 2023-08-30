#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;

	deque<int> d;
	while (n--) {
		int input;
		cin >> input;

		if (input == 1) {
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (input == 2) {
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (input == 3) {
			if (!d.empty()) {
				cout << d.front() << "\n";
				d.pop_front();
			}
			else cout << -1 << "\n";
		}
		else if (input == 4) {
			if (!d.empty()) {
				cout << d.back() << "\n";
				d.pop_back();
			}
			else cout << -1 << "\n";
		}
		else if (input == 5) {
			cout << d.size() << "\n";
		}
		else if (input == 6) {
			if (!d.empty()) cout << 0 << "\n";
			else cout << 1 << "\n";
		}
		else if (input == 7) {
			if (!d.empty()) cout << d.front() << "\n";
			else cout << -1 << "\n";
		}
		else if (input == 8) {
			if (!d.empty()) cout << d.back() << "\n";
			else cout << -1 << "\n";
		}
	}
	return 0;
}