#include <iostream>
#include <vector>
using namespace std;

int Gcd(int a, int b);

int main() {
	int n, current, temp, cnt = 0;
	cin >> n;
	vector<int> vec;

	cin >> current;
	for (int i = 0; i < n-1; i++) {
		cin >> temp;
		vec.push_back(temp - current);
		current = temp;
	}

	int gcd = vec[0];
	for (int i = 0; i < n - 1; i++) {
		gcd = Gcd(gcd, vec[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		cnt += (vec[i] / gcd - 1);
	}

	cout << cnt;

	return 0;
}

int Gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}