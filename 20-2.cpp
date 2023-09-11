#include <iostream>
#include <set>
using namespace std;

int main() {
	set<string> chat;
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "ENTER") {
			cnt += chat.size();
			chat.clear();
			continue;
		}
		chat.insert(input);
	}
	cnt += chat.size();
	cout << cnt;
	return 0;
}