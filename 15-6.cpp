#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main() {
	int m, n, num;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) cout << i << "\n";
	}
	return 0;
}

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}