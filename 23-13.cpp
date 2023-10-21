#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> v(n + 1), dp1(n + 1), dp2(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		dp1[i] = dp2[i] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (v[j] < v[i] && dp1[j] + 1 > dp1[i]) dp1[i] = dp1[j] + 1;
		}
	}
	for (int i = n; i >= 1; i--) {
		for (int j = n; j >= i; j--) {
			if (v[i] > v[j] && dp2[j] + 1 > dp2[i]) dp2[i] = dp2[j] + 1;
		}
	}
	
	int len = 0;
	for (int i = 0; i <= n; i++) {
		if (len < dp1[i] + dp2[i] - 1) len = dp1[i] + dp2[i] - 1;
	}
	cout << len;
	return 0;
} 