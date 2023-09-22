#include <iostream>
using namespace std;

int arr[5000001];
int tmp[5000001];
int cnt, k;
bool flag;
void merge_sort(int [], int, int);
void merge(int [], int, int, int);

int main() {
	int n;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	 }
	merge_sort(arr, 0, n - 1);
	if (!flag) cout << -1;

	return 0;
}

void merge_sort(int a[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(a, p, q);
		merge_sort(a, q + 1, r);
		merge(a, p, q, r);
	}
}

void merge(int a[], int p, int q, int r) {
	int i = p, j = q + 1, t = 1;
	while (i <= q && j <= r) {
		if (a[i] <= a[j]) tmp[t++] = a[i++];
		else tmp[t++] = a[j++];
	}
	while (i <= q) tmp[t++] = a[i++];
	while (j <= r) tmp[t++] = a[j++];
	i = p, t = 1;
	while (i <= r) {
		a[i++] = tmp[t++];
		cnt++;
		if (cnt == k) {
			cout << a[i - 1];
			flag = true;
			return;
		}
	}
}