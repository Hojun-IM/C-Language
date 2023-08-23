#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		string input;
		stack<int> stack;
		cin >> input;
		string ans = "YES";

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') stack.push(input[i]);
			else if (!stack.empty() && input[i] == ')' && stack.top() == '(') stack.pop();
			else {
				ans = "NO";
				break;
			}
		}
		if (!stack.empty()) ans = "NO";
		cout << ans << "\n";
	}
	return 0;
}