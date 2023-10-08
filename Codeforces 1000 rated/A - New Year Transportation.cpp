#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

const int N = 3e4 + 5;
int n, m,mini=1e9+1;
vector<int>adj[N], arr(N);
bool vis[N],flag=0;

void dfs(int i) {
	vis[i] = 1;
	if (i == m) {
		flag = 1; return;
	}
	for (auto it : adj[i]) {
		if (!vis[it]) {
			dfs(it);
		}
	}
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		adj[i].push_back(i + arr[i]);
	}
	dfs(1);
	if (flag) {
		cout << "YES"; return 0;
	}
	cout << "NO"; return 0;
}