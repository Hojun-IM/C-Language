#include <iostream>
using namespace std;

long long arr[10000001];
long long tile(int n);

int main() {
	int n;
	cin >> n;
	cout << tile(n);
	return 0;
}

long long tile(int n) {
	if (n <= 2) return n;
	if (arr[n] != 0) return arr[n];
	return arr[n] = (tile(n - 1) + tile(n - 2)) % 15746;
}