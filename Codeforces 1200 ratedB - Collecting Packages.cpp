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

bool done(string x, string y) {
	if (y.find(x) != -1)
		return true;
	else
		return false;
}

bool compare2(pair<long, long> a, pair<long, long> b)
{
	return  a.first < b.first;
}
bool compare3(pair<long, long> a, pair<long, long> b)
{
	return  a.first == b.first && a.second < b.second;
}

pair<string,string> direction(pair < long, long>next, pair<long, long>current)
{
	long right = next.first - current.first;
	long up = next.second - current.second;
	if (up < 0 || right < 0)
	{
		return make_pair("F", "F");
	}
	pair<string, string>dir;
	dir.first = "";
	dir.second = "";
	for (int i = 0; i < right; i++)
	{
		dir.first += "R";
	}
	for (int i = 0; i < up; i++)
	{
		dir.second += "U";
	}
	return dir;
}



void test()
{
	int n;
	cin >> n;
	vector<pair<long, long>>v(n);
	for (int i = 0; i < n; i++)cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());
	/*el; for (auto it : v)
	{
		cout << it.first; sp; cout << it.second; el;
	}el;*/
	pair<long, long >currenPosition;
	pair<long, long>nextPosition;
	string answer;
	currenPosition.first = 0;
	currenPosition.second = 0;
	bool flag = false;
	long count = 0;
	for (int i = 0; i < n; i++)
	{
		nextPosition.first = v[i].first;
		nextPosition.second = v[i].second;
		pair<string, string>dire;
		dire = direction(nextPosition, currenPosition);
		count++;
		if (dire.first == "F" || dire.second == "F") {
			no; flag = true; break;
		}
		answer += (dire.first + dire.second);
		currenPosition = nextPosition;
	}
	if (!flag)
	{
		if (count == n)
		{
			yes el;
			cout << answer;
		}
		else
		{
			no;
		}
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
