#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int k, n;
	cin >> n >> k;
	cout << factorial(n) / (factorial(n - k) * factorial(k));
	return 0;
}

int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}