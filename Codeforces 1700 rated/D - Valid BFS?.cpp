#include<iostream>
#include<vector>
#include<queue>
#include<map>

#define int long long
using namespace std;

const int N = 2e5 + 5;
int n,index;
bool vis[N];
vector<int>adj[N];
queue<int>arr;

bool bfs(int start = 1) {
	queue<int>q;
	vis[start] = 1;
	q.push(1);
	while (!q.empty()) {
		int f = q.front();
		q.pop();
		map<int, bool>m;
		int sze = 0;
		for (auto it : adj[f]) {
			if (!vis[it]) {
				vis[it] = 1;
				m[it] = 1;
				sze++;
			}
		}
		for (int i = 0; i < sze; i++) {
			if (!m[arr.front()]) {
				return 0;
			}
			else {
				q.push(arr.front());
				arr.pop();
			}
		}
	}
	return 1;
}

signed main() {
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push(a);
	}
	if (arr.front() != 1) {
		cout << "No"; return 0;
	}
	arr.pop();
	cout << (bfs() ? "Yes" : "No");
}