#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long num);

int main() {
	long long n, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num <= 2)cout << 2 << "\n";
		else {
			while (!isPrime(num)) num++;
			cout << num << "\n";
		}
	}
	return 0;
}

bool isPrime(long long num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}