#include<iostream>
#include<vector>
#define int long long
using namespace std;

const int N = 1e5 + 5;
int n, m, mini = 1e9+1;
vector<int>arr[N],cost(N);
bool vis[N];

void dfs(int i) {
	vis[i] = 1;
	mini = min(mini, cost[i]);
	for (auto it : arr[i]) {
		if (!vis[it]) {
			dfs(it);
		}
	}
}

signed main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> cost[i];
	}
	while (m--) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	int ans=0;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
			ans += mini;
			mini = 1e9 + 1;
		}
	}
	cout << ans;
}