#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int dep, int num);

int main() {
	fastio;
	
	cin >> n >> m;
	dfs(0, 1);

	return 0;
}

void dfs(int dep, int num) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	
	for (int i = num; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[dep] = i;
			dfs(dep + 1, i + 1);
			visited[i] = false;
		}
	}
}