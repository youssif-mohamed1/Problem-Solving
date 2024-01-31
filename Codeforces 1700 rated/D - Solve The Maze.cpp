#include<iostream>
#include <cstring> 

using namespace std;

int n, m,cnt;
const int N = 55;
char arr[N][N];
bool vis[N][N],escape;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };


bool valid(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

bool block(int x,int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (valid(nx, ny)) {
			if (nx == n - 1 && ny == m - 1 || arr[nx][ny] == 'G') {
				return 1;
			}
			else {
				if (arr[nx][ny] != 'B') {
					arr[nx][ny] = '#';
				}
			}
		}
	}
	return 0;
}

void dfs(int x = n - 1, int y = m - 1) {
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (valid(nx, ny) && !vis[nx][ny] && arr[nx][ny] != '#') {
			if (arr[nx][ny] == 'G') {
				cnt++;
			}
			dfs(nx, ny);
		}
	}
}

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int g = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == 'G') {
					g++;
				}
			}
		}
		if (!g && (arr[n-1][m-1]!='B' && arr[n-1][m-1]!='#')) {
			cout << "Yes";
			goto skip;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 'B') {
					if (block(i, j) || (i==n-1 && j==m-1)) {
						cout << "No"; 
						goto skip;
					}
				}
			}
		}
		dfs();
		if (cnt != g) {
			cout << "No";
			goto skip;
		}
		cout << "Yes";
	skip:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				vis[i][j] = 0;
				arr[i][j] = '.';
			}
		}
		escape = 0;
		cnt = 0;
		cout << endl;
	}
	return 0;
}