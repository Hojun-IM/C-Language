#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> stack;
	int k, input, sum = 0;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> input;
		if (input == 0) {
			stack.pop();
			continue;
		}
		stack.push(input);
	}

	while (!stack.empty()) {
		sum += stack.top();
		stack.pop();
	}
	cout << sum;
	return 0;
}