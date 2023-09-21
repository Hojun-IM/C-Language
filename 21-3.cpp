#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);
int cnt;

int main() {
	int n;
	cin >> n;

	while (n--) {
		cnt = 0;
		string input;
		cin >> input;
		cout << isPalindrome(input.c_str()) << " " << cnt << "\n";
	}
	return 0;
}

int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}