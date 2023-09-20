#include <iostream>
using namespace std;

int factorial(int);

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	cout << factorial(n);
	return 0;
}

int factorial(int n) {
	if (n <= 2) return 1;
	return factorial(n - 1) + factorial(n - 2);
}