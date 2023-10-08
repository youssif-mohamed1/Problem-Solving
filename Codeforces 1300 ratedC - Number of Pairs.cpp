#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<math.h>
#include<cmath>
#include <map>
using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define el cout<<endl;
#define sp cout<<" ";
#define el3 cout<<endl<<endl<<endl;

void test() {
	long n; long l, r;
	cin >> n >> l >> r;
	vector<long>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	sort(v.begin(), v.end());
	 long long ans=0;
	for (int i = 0; i < n; i++)
	{
		ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
		ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
		if (l <= 2 * v[i] && 2 * v[i] <= r) {
			ans--;
		}
	}
	cout << ans/2;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) { test(); el; }
}
