#include <iostream>
using namespace std;
#define MAX 123456 * 2

int num[MAX + 1] = { false };

int main() {
	int n;
	while(1) {
		int cnt = 0;
		cin >> n;
		if (!n) break;

		for (int i = 2; i <= 2 * n; i++) {
			if(num[i]==false) num[i]=false;
			for (int j = i + i; j <= 2 * n; j += i) {
				if (num[j] != true) num[j] = true;
			}
		}

		for (int i = n + 1; i <= 2 * n; i++) {
			if (num[i] == false) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}