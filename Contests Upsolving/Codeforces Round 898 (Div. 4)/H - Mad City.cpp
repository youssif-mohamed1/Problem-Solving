#include<bits/stdc++.h>

using namespace std;

int n, m, k, at;
const int N = 2e5+5;
vector<int>parent(N),cycle(N);
vector<bool>qvis(N),vis(N),isCycle(N);
vector<vector<int>> adj(N); 

class Graph {
public:

	void reset(int n) {
		for (int i = 1; i <= n; i++) {
			qvis[i] = vis[i] = isCycle[i] = parent[i] = cycle[i] = 0;
			adj[i].clear();
		}
	}

	void addEdge(int u, int v) {
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bool DFS(int v) {
		vis[v] = true;
		for (int u : adj[v]) {
			if (!vis[u]) {
				parent[u] = v;
				if (DFS(u))
					return true;
			}
			else if (u != parent[v]) {
				int currentNode = v;
				cycle.push_back(currentNode);
				while (currentNode != u) {
					currentNode = parent[currentNode];
					isCycle[currentNode] = 1;
					cycle.push_back(currentNode);
				}
				return true;
			}
		}
		return false;
	}

	void BFS(int i, int j, vector<int>& costArray, vector<bool>qv) {
		queue<pair<int, int>>q;
		qv[i] = 1;
		q.push({ i, 0 });
		while (!q.empty()) {
			pair<int, int>p = q.front();
			q.pop();
			int next = p.first, cost = p.second;
			for (auto it : adj[next]) {
				if (!qv[it]) {
					q.push({ it,cost + 1 });
					qv[it] = 1;
					costArray[it] = cost + 1;
				}
			}
		}
	}
};


signed main() {
	int t = 1;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> n >> k >> m;
		Graph graph;
		for (int i = 1; i <= n; i++) {
			cin >> a >> b;
			graph.addEdge(a, b);
		}
		graph.DFS(m);
		vector<bool>v(N);
		vector<int>mCost(N), kCost(N);
		graph.BFS(m, 0, mCost, qvis);
		graph.BFS(k, 0, kCost, v);
		for (int i = 1; i <= n; i++) {
			if (mCost[i] < kCost[i] && isCycle[i]) {
				cout << "YES"; goto end;
			}
		}
		cout << "NO";
	end:
		cout << endl;
		graph.reset(n);
	}
}