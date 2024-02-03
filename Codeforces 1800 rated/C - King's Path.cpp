#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<map>

#define int long long
using namespace std;

int dx[8] = { 0,0,1,-1,1,-1,1,-1 };
int dy[8] = { 1,-1,0,0,-1,1,1,-1 };
map<int,vector<pair<int,int>>>row;
map<pair<int, int>, bool>vis;

bool valid(int x, int y) {
	if (x >= 0 && y >= 0 && x <= 1e9 && y <= 1e9) {
		for (auto it : row[x]) {
			if (it.first <= y && it.second >= y) {
				return 1;
			}
		}
	}
	return 0;
}

bool shortest_path(pair<pair<int, int>, pair<int, int>>a, pair<pair<int, int>, pair<int, int>>b) {
	int x1 = a.first.first - a.second.first;
	int y1 = a.first.second - a.second.second;
	int x2 = b.first.first - b.second.first;
	int y2 = b.first.second - b.second.second;
	return x1 * x1 + y1 * y1 < x2 * x2 + y2 * y2;
}

int bfs(int a, int b, int x, int y, int cost = 0) {
	queue<pair<pair<int, int>,int>>q;
	q.push({ {a,b},cost });
	while (!q.empty()) {
		pair<pair<int, int>, int>f = q.front();
		q.pop();
		vector<pair<pair<int, int>, pair<int,int>>>v;
		for (int i = 0; i < 8; i++) {
			int nx = f.first.first + dx[i], ny = f.first.second + dy[i];
			if (valid(nx, ny) && !vis[{nx,ny}]) {
				vis[{nx, ny}] = 1;
				v.push_back({ {nx,ny},{x,y} });
			}
		}
		sort(v.begin(),v.end(), shortest_path);
		for (auto it : v) {
			q.push({ it.first,f.second+1 });
			if (it.first.first == x && it.first.second == y) {
				return f.second + 1;
			}
		}
	}
	return -1;
}

signed main() {
	int a,b,x,y,n;
	cin >> a >> b >> x >> y >> n;
	while (n--) {
		int r, c, d;
		cin >> r >> c >> d;
		row[r].push_back({ c,d });
	}
	cout << bfs(a, b, x, y);
}