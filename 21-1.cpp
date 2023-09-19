#include <iostream>
using namespace std;

long long int factorial(int);

int main() {
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}

long long int factorial(int n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}