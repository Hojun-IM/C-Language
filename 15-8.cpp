#include <iostream>
using namespace std;
#define MAX 1000000 + 1

int num[MAX];

int main() {
	int t, n;
	cin >> t;

	for (int i = 2; i < MAX; i++) {
		num[i] = i;
	}
	for (int i = 2; i <= MAX; i++) {
		if (num[i] == false) num[i] = false;
		for (int j = i + i; j <= MAX; j += i) {
			if (num[j] != true) num[j] = true;
		}
	}

	for (int i = 0; i < t; i++) {
		int cnt = 0;
		cin >> n;

		for (int j = 2; j < n; j++) {
			if (num[j] + num[n - j] == n) {
				cnt++;
				if (n - j == j) cnt++;
			}
		}
		cout << cnt / 2 << "\n";
	}
	return 0;
}