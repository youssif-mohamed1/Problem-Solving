#include<iostream>
#include<string>
#include<cstring>
#include<queue>
#include<map>

#define int long long
using namespace std;

int n, m, cnt=0, cost;
string x;
map<string, bool>vis;

void bfs() {
	queue<pair<string,int>>q;
	q.push({ x ,0 });
	vis[x] = 1;
	while (!q.empty()) {
		pair<string,int> f = q.front();
		q.pop();
		cost += f.second;
		if (++cnt == m) return;
		if (f.second < n) {
			for (int i = 0; i < n-f.second; i++) {
				string nx = f.first.substr(0, i);
				nx += f.first.substr(i + 1, n - f.second - i);
				if (!vis[nx]) {
					vis[nx] = 1;
					q.push({ nx,f.second + 1 });
				}
			}
		}
	}
}

signed main() {
	cin >> n >> m;
	cin >> x;
	bfs();
	if (cnt == m)cout << cost;
	else cout << -1;
}