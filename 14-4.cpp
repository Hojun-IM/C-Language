#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n, m;
	string input;
	vector<string> name, ans;
	map<string, int> pokemon;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input;
		name.push_back(input);
		pokemon.insert(pair<string, int>(input, i));
	}
	for (int i = 0; i < m; i++) {
		cin >> input;
		if (input[0] >= 65 && input[0] <= 90) {
			ans.push_back(to_string(pokemon[input]+1));
		}
		else {
			ans.push_back(name[stoi(input) - 1]);
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}

	return 0;
}