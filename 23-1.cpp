#include <iostream>
using namespace std;

int fib(int n);
int fibonacci(int n);

int cnt1, cnt2;
int dp[41];

int main() {
    int n;
    cin >> n;
    int first = fib(n), second = fibonacci(n);
    cout << cnt1 << " " << cnt2;
	return 0;
}

int fib(int n) {
    if (n == 1 or n == 2) {
        cnt1++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}
int fibonacci(int n) {
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; i ++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cnt2++;
    }
    return dp[n];
}