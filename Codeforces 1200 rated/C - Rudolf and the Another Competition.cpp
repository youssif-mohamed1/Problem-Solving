#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define el cout<<endl;
#define sp cout<<" ";
#define el3 cout<<endl<<endl<<endl;

void test() {
	int n, m, place = 1; long long h;
	cin >> n >> m >> h;
	pair<int, long long>R;
	for(int i=0;i<n;i++)
	{
		vector<int>v(m + 1);
		pair<int, long long>p;
		vector<long long>sum(m + 1);
		for (int i = 1; i <= m; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (int i = 1; i <= m; i++)
		{
			sum[i] += (sum[i - 1] + v[i]);
		}
		/*el3;
		for (auto it : v)
		{
			cout << it; sp;
		}el;
		for (auto it : sum)
		{
			cout << it; sp;
		}el;*/
		long long t = 0;
		for (int i = 1; i <= m; i++)
		{
			t += v[i];
			if (t <= h)
			{
				p.first++;
				p.second += sum[i];
			}
		}
		if (i == 0)
		{
			R.first = p.first;
			R.second = p.second;
		}
		else
		{
			if (p.first > R.first)
			{
				place++;
			}
			else if(p.first==R.first)
			{
				if (p.second < R.second)
				{
					place++;
				}
			}
		}
	}	
	cout << place;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
		int t = 1;
	cin >> t;
	while (t--) { test(); el; }
}
