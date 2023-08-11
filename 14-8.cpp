#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	string input;
	set<string> word;

	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		string tmp = "";
		for (int j = i; j < input.length(); j++) {
			tmp += input[j];
			word.insert(tmp);
		}
	}
	cout << word.size();
	return 0;
}