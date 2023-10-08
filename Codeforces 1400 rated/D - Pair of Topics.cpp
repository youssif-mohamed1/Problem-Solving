#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

bool compare(long a, long b)
{
	return a > b;
}

void test(){
	int n;
	cin >> n;
	vector<long>a(n);
	vector<long>b(n);
	vector<long>c(n);
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++)cin >> b[i], c[i] = a[i] - b[i];
	a.clear(); b.clear();
	sort(c.begin(), c.end(),compare);
	long long sum = 0;
	int p1 = 0, p2 = n - 1;
	while (p1 <= p2)
	{
		if (c[p1] + c[p2] > 0)
		{
			sum += (p2 - p1);
			p1++;
		}
		else
		{
			p2--;
		}
	}
	cout << sum;
}

int main()
{
	YJooe 
		int t = 1;
	//cin >> t;
	while (t--) { test(); }
}
/*
Problem Link
https://codeforces.com/contest/1324/problem/D
*/