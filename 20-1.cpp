#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[51];
	int n, num;
	cin >> n;

	for (int i = 0; i < n;  i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	num = arr[0] * arr[n - 1];
	cout << num;
	return 0;
}