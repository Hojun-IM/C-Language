#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;

int v, e, start;
int dis[20001];
vector<pair<int, int>> vertex[20001];

int main() {
	cin >> v >> e;
	cin >> start;

	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		vertex[a].push_back(make_pair(b, c));
	}
	for (int i = 1; i <= v; i++) {
		dis[i] = INF;
	}

	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	dis[start] = 0;

	while (pq.empty() == 0) {
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		for (int i = 0; i < vertex[cur].size(); i++) {
			int next = vertex[cur][i].first;
			int nCost = vertex[cur][i].second;
			if (dis[next] > cost + nCost) {
				dis[next] = cost + nCost;
				pq.push(make_pair(-dis[next], next));
			}
		}
	}
	for (int i = 1; i <= v; i++) {
		if (dis[i] == INF) cout << "INF" << "\n";
		else cout << dis[i] << "\n";
	}

	return 0;
}