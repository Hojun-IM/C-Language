#include <iostream>
using namespace std;

long long arr[101];
long long p(int n);

int main() {
	int n;
	cin >> n;
	while (n--) {
		int input;
		cin >> input;
		cout << p(input) << "\n";
	}
	return 0;
}

long long p(int n) {
	arr[1] = arr[2] = arr[3] = 1;
	arr[4] = arr[5] = 2;
	if (arr[n]) return arr[n];
	return arr[n] = p(n - 1) + p(n - 5);
}