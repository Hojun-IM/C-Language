#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;

int main() {
	fastio;
	cin >> n;
	
	vector<int> A(n), LCS;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	LCS.push_back(A[0]);

	for (int i = 1; i < n; i++) {
		if (A[i] > LCS.back()) LCS.push_back(A[i]);
		else {
			auto idx = lower_bound(LCS.begin(), LCS.end(), A[i]);
			LCS[idx - LCS.begin()] = A[i];
		}
	}
	cout << LCS.size();

	return 0;
}