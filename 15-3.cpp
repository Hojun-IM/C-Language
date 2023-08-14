#include <iostream>
using namespace std;

int Gcd(int a, int b);
int Lcm(int a, int b);

int main() {
	int d1, d2, n1, n2, a1, a2, tmp;
	cin >> n1 >> d1 >> n2 >> d2;

	a1 = (n1 * d2) + (n2 * d1);
	a2 = d1 * d2;
	tmp = Gcd(a1, a2);

	a1 /= tmp;
	a2 /= tmp;

	cout << a1 << " " << a2;

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

int Lcm(int a, int b) {
	return a * b / Lcm(a, b);
}