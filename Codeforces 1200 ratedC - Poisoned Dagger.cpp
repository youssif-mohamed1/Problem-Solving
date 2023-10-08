#include<iostream>	
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<time.h>
#include<math.h>
#include<list>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<deque>
#include<cmath>
#include<numeric>
#include<stdio.h>
#include <numeric>
#include <fstream>
#include <queue>
#include<stack>
#include<forward_list>
#include<bitset>

using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define el cout<<endl;
#define sp cout<<" ";
#define neg cout<<"-1";
#define yes cout<<"YES";
#define no cout<<"NO";
#define ok cout<<"OK";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
#define ld long double
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

bool valid(long long mid, vector<long>v, long long k, int n)
{
	long long sum = 1;
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (mid >= v[i + 1] - v[i] + 1)
			{
				sum += v[i + 1] - v[i];
			}
			else
			{
				sum += mid;
			}
		}
		else
		{
			sum += mid;
		}
	}
	return sum > k;
}

void test()
{
	int n;
	cin >> n;
	long long k;
	cin >> k;
	vector<long>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	long long l = 0, r = k;
	long long mid, ans = 0;
	if (n == 1)
	{
		cout << k;
	}
	else
	{
		while (l <= r) {
			mid = (l + r) / 2;
			if (valid(mid, v, k, n))
			{
				ans = mid;
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		cout << ans;
	}
}

int main()
{
	//	freopen("game.in", "r", stdin);
	YJooe
		int t = 1;
	cin >> t;
	while (t--) { test(); el; }
}
