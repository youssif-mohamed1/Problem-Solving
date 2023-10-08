#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<utility>
#define ll long long
using namespace std;

const int N = 101;
int n, m, path = 0;
vector<pair<int,int>>adj[N];
bool vis[N][N];
char arr[N][N];
string ans="NO",pa;

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

bool valid(int x, int y) {
	return x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && arr[x][y] != '#';
}

struct node {
	int x, y,cost;
	string path;
	node(int X, int Y, int c, string p) :x(X), y(Y), cost(c), path(p) {}
};

void bfs(int sx, int sy, int ex, int ey) {
	queue<node>q; // node and the cost of the node
	q.push({ sx,sy ,0 ,""});
	vis[sx][sy] = 1;
	while (!q.empty()) {
		node p = q.front();
		q.pop();
		vis[p.x][p.y] = 1;
		if (p.x == ex && p.y == ey) {
			pa = p.path;
			ans = "YES";
		}
		q.push(node(p.x, p.y - 1, p.cost + 1, p.path + 'L'));
		q.push(node(p.x, p.y + 1, p.cost + 1, p.path + 'R'));
		q.push(node(p.x - 1, p.y, p.cost + 1, p.path + 'U'));
		q.push(node(p.x + 1, p.y, p.cost + 1, p.path + 'D'));
	}
}

signed main() {
	int sum = 0;
	vector<int>v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		sum += v[i];
	}
	cout << ((!(sum % 5) && sum!=0) ? sum / 5 : -1);
}