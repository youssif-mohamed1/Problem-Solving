#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve() {
	int n,o=0,e=0;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] & 1)o++;
		else e++;
	}
	if (n & 1) {
		cout << "NO"; return;
	}
	if (!(o & 1) && !(e & 1)) {
		cout << "YES"; return;
	}
	sort(v.begin(), v.end());
	for (int i = 1; i < n; i++) {
		if (v[i] - v[i - 1] == 1) {
			cout << "YES"; return;
		}
	}
	cout << "NO";
}

signed main() {
	int t = 0;
	cin >> t;
	while (t--) {
		solve(); cout << endl;
		
	}

}