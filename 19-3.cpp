#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, sum = 1;
	cin >> n;

	if (n == 1) {
		cout << 1;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << sum;
	return 0;
}