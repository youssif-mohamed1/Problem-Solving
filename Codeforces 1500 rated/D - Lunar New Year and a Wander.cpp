#include<iostream>
#include<vector>
#include<set>
#include<queue>

#define int long long
using namespace std;

int n, m;
const int N = 1e5 + 5;
bool vis[N];
vector<int>adj[N];

void bfs(int start=1) {
	priority_queue<int,vector<int>,greater<int>>q;
	vis[start] = 1;
	q.push(start);
	while (!q.empty()) {
		int f = q.top();
		cout << f << " ";
		q.pop();
		for (auto it : adj[f]) {
			if (!vis[it]) {
				vis[it] = 1;
				q.push(it);
			}
		}
	}
}

signed main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs();
	return 0;
}