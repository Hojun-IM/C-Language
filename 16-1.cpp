#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> stack;
	int n, choice, num;
	cin >> n;
	
	while (n--) {
		cin >> choice;
		if (choice == 1) {
			cin >> num;
			stack.push(num);
		}
		else if (choice == 2) {
			if (stack.empty()) cout << -1 << "\n";
			else {
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (choice == 3) {
			cout << stack.size() << "\n";
		}
		else if (choice == 4) {
			if (stack.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (choice == 5) {
			if (stack.empty()) cout << -1 << "\n";
			else cout << stack.top() << "\n";
		}
	}
	return 0;
}