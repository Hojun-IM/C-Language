#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define INF 10000000
using namespace std;

int n, e, v1, v2;
int dist[801];
vector<pair<int, int>> graph[801];

void dijkstra(int start);

int main() {
	fastio;
	cin >> n >> e;

	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({ b, c });
		graph[b].push_back({ a, c });
	}
	cin >> v1 >> v2;

	dijkstra(1);
	int stov1 = dist[v1];
	int stov2 = dist[v2];

	dijkstra(v1);
	int v1tov2 = dist[v2];
	int v1ton = dist[n];

	dijkstra(v2);
	int v2ton = dist[n];

	int ans = min(INF, stov1 + v1tov2 + v2ton);
	ans = min(ans, stov2 + v1tov2 + v1ton);
	if (ans >= INF) cout << -1;
	else cout << ans;

	return 0;
}

void dijkstra(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	for (int i = 1; i <= n; i++) dist[i] = INF;
	pq.push(make_pair(0, start));
	dist[start] = 0;

	while (!pq.empty()) {
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost) continue;

		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i].first;
			int nCost = cost + graph[cur][i].second;

			if (dist[next] > nCost) {
				dist[next] = nCost;
				pq.push({ nCost, next });
			}
		}
	}
}