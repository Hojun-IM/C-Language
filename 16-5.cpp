#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, input;
	cin >> n;

	queue<int> current;
	while (n--) {
		cin >> input;
		current.push(input);
	}

	stack<int> line;
	vector<int> readyline;
	int now = 1;

	while (!current.empty()) {
		if (current.front() == now) {
			readyline.push_back(now);
			current.pop();
			now++;
		}
		else if (!line.empty() && line.top() == now) {
			readyline.push_back(now);
			line.pop();
			now++;
		}
		else {
			line.push(current.front());
			current.pop();
		}
	}
	while (!line.empty()) {
		readyline.push_back(line.top());
		line.pop();
	}

	bool nice = 1;
	for (int i = 0; i < readyline.size() - 1; i++) {
		if (readyline[i] > readyline[i + 1]) {
			nice = 0;
			break;
		}
	}

	if (nice == true) cout << "Nice";
	else cout << "Sad";

	return 0;
} 