#include <iostream>
#include <string>
using namespace std;

int minimal(string x);

int main() {
	string input;
	cin >> input;
	cout << minimal(input);
	return 0;
}

int minimal(string x) {
	string num;
	bool minus = false;
	int ans = 0;

	for (int i = 0; i <= x.size(); i++) {
		if (x[i] == '+' || x[i] == '-' || i == x.size()) {
			if (minus) {
				ans -= stoi(num);
				num = "";
			}
			else {
				ans += stoi(num);
				num = "";
			}
		}
		else num += x[i];
		if (x[i] == '-') minus = true;
	}
	return ans;
}