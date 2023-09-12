#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	map<string, bool> m;
	string input1, input2;
	while (n--) {
		cin >> input1 >> input2;
		if (input1 == "ChongChong") {
			m.insert({ input1, true });
		}
		else if (input2 == "ChongChong") {
			m.insert({ input2, true });
		}
		if (m[input1]) m[input2] = true;
		if (m[input2]) m[input1] = true;
	}
	for (auto& value : m) {
		if (value.second) cnt++;
	}
	cout << cnt;
	return 0;
}