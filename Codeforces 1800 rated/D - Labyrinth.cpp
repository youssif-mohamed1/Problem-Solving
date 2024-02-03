#include<iostream>
#include<queue>
#include<utility>

#define int long long

using namespace std;

const int N = 2004;
int n, m, x, y, dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,1,-1 }; // U D R L
bool vis[N][N];
char arr[N][N];
vector<vector<pair<int, int>>>d(N, vector<pair<int, int>>(N, { -1,-1 }));

bool valid(int a, int b) {
	return (a >= 0 && a < n && b >= 0 && b < m && arr[a][b] == '.');
}

void bfs(int a, int b) {
	queue<pair<pair<int, int>, pair<int, int>>>q;
	vis[a][b] = 1;
	q.push({ {a,b},{0,0} });
	d[a][b] = { 0,0 };
	while (!q.empty()) {
		pair<int, int>f = q.front().first, c = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = f.first + dx[i], ny = f.second + dy[i];
			if (valid(nx, ny)) {
				if (i == 2) {
					if (!vis[nx][ny] || vis[nx][ny] && c.first + 1 < d[nx][ny].first) {
						q.push({ {nx,ny},d[nx][ny] = { c.first + 1,c.second } });
						vis[nx][ny] = 1;
					}
				}
				else if (i == 3) {
					if (!vis[nx][ny] || vis[nx][ny] && c.second + 1 < d[nx][ny].second) {
						q.push({ {nx,ny},d[nx][ny] = { c.first,c.second + 1 } });
						vis[nx][ny] = 1;
					}
				}
				else {
					if (!vis[nx][ny] || vis[nx][ny]&&(c.first < d[nx][ny].first || c.second < d[nx][ny].second)) {
						q.push({ {nx,ny},d[nx][ny] = c });
						vis[nx][ny] = 1;
					}
				}
			}
		}
	}
}

signed main() {
	pair<int, int>start;
	cin >> n >> m >> start.first >> start.second >> x >> y;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	bfs(start.first - 1, start.second - 1);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (d[i][j].first ==-1 && d[i][j].second==-1) continue;
			if (d[i][j].first <= y && d[i][j].second <= x) {
				cnt++;
			}
		}
	}
	cout << cnt;
}