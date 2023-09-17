#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int arr[8001];

int main() {
	int n;
	cin >> n;

	int sum = 0, index = 0, max = 0;
	int mean = 0, median = 0, mode = 0, dif = 0;
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
		sum += input;
		arr[input + 4000]++;
	}
	
	sort(vec.begin(), vec.end());

	for (int i = 0; i < 8001; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	for (int i = index + 1; i < 8001; i++) {
		if (arr[i] == max) {
			index = i;
			break;
		}
	}

	mean = round(double(sum) / n);
	median = vec[n / 2];
	mode = index - 4000;
	dif = vec[n - 1] - vec[0];

	cout << mean << "\n" << median << "\n" << mode << "\n" << dif << "\n";

	return 0;
}