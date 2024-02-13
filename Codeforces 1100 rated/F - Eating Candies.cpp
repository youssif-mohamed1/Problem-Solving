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
	int n;
	cin >> n;
	vector<int>v(n+1);
	vector<long>ps(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		ps[i] = (ps[i - 1] + v[i]);
	}
	vector<long>ss(n + 1);
	ss[n] = v[n];
	for (int i = n - 1; i > 0; i--)
	{
		ss[i] = (ss[i + 1] + v[i]);
	}
	/*for (auto it : ps)
	{
		cout << it; sp;
	}el;
	for (auto it : ss)
	{
		cout << it; sp;
	}*/
	int p1 = 1, p2 = n;
	int totall=0;
	while (p1 < p2)
	{
		if (ps[p1] > ss[p2])
		{
			p2--;
		}
		else if (ps[p1] < ss[p2])
		{
			p1++;
		}
		else
		{
			totall = max(totall, (p1 + n - p2 + 1));
			p1++;
		}
	}//el;
	cout << totall;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) { test(); el; }
}
