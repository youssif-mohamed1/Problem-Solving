#include<iostream>
#include<vector>

using namespace std;
#define int long long
const int N = 1e5 + 5;
bool vis[N];
int s[N];
int n, m, ans;
vector<int>adj[N];
const int dx[] = { 1,-1,0,0 };
const int dy[] = { 0,0,1,-1 };

bool isLeaf(int i) {
	for (auto it : adj[i]) {
		if (!vis[it])
			return 0;
	}
	return 1;
}

void dfs(int i) {
	vis[i] = 1;
	if (s[i] > m)
		return;
	if (isLeaf(i) && s[i] <= m)
		ans++;
	for (auto it : adj[i]) {
		if (!vis[it]) {
			if (s[it]) {
				s[it] += s[i];
			}
			dfs(it);
		}
	}
}

signed main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	cout << ans;
}