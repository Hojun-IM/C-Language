#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int n;
	string name, status;
	set<string> person;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> status;
		if (status == "enter") person.insert(name);
		else person.erase(name);
	}

	for (auto iter = person.rbegin(); iter != person.rend(); iter++) {
		cout << *iter << "\n";
	}
	
	return 0;
}