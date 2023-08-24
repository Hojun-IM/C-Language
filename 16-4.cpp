#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		string input;
		stack<char> stack;
		getline(cin, input);

		if (input == ".") break;

		bool check = 0;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(' || input[i] == '[') stack.push(input[i]);
			else if (input[i] == ')') {
				if (!stack.empty() && stack.top() == '(') stack.pop();
				else {
					check = 1;
					break;
				}
			}
			else if (input[i] == ']') {
				if (!stack.empty() && stack.top() == '[') stack.pop();
				else {
					check = 1;
					break;
				}
			}
		}
		if (stack.empty() && check == 0) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}