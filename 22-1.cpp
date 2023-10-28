#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int dep);

int main() {
	cin >> n >> m;
	dfs(0);
	return 0;
}

void dfs(int dep) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[dep] = i;
			dfs(dep + 1);
			visited[i] = false;
		}
	}
}