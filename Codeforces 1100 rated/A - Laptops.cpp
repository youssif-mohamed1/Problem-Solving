#include<iostream>
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
using namespace std;
#define ret  return 0;
#define el cout<<endl;
#define el2 cout<<endl<<endl;
#define el3 cout<<endl<<endl<<endl;
#define sp cout<<" ";
#define neg cout<<-1;
#define yes cout<<"YES";
#define no cout<<"NO";
#define ok cout<<"OK";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
#define ld long double
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef pair<int, int>intp;
void test();
int main()                                    /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	YJooe
	test();
	ret;
}
void test()
{
	int n, k = 0;
	cin >> n;
	//vector<int>v(2);
	//vector<int>a(2,1000000);
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> v[0] >> v[1];
	//	if (v[1] <= a[1])
	//	{
	//		a[0] = v[0];
	//		a[1] = v[1];
	//	}
	//}
	/*vector<pair<int, int>>v(n/2);*/
	/*for (int i = 0; i < 2*n; i++)
	{
		if (i % 2 == 0)
		{
			v[i].first;
		}
		else
		{
			v[i].second;
		}
	}
	sort(v.begin(), v.end());
	for (auto it : v)
	{
		cout << it.first; sp; cout << it.second; el;
	}*/
	//map<int, int>laptops;
	//int c = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> c;
	//	cin >> k;
	//	laptops[k] = c;
	//}
	//for (auto it : laptops)
	//{
	//	cout << it.first; sp; cout << it.second; el;
	//}
	//auto it = laptops.begin();
	//auto ir = laptops.end();
	//ir--;
	//if (it->second < ir->second)
	//{
	//	cout << "Poor Alex";
	//}
	//else
	//{
	//	cout << "Happy Alex";
	//}
	multiset<intp>s;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> k >> c;
		intp x = make_pair(k, c);
		s.insert(x);
	}
			//}
	//for (auto ot : s)
	//{
	//	cout << ot.first; sp; cout << ot.second; el;
	//}
	multiset<pair<int, int>>::iterator ir = s.begin();
	ir++;
	int i = 0,j=0;
	for (multiset<pair<int, int>>::iterator it = s.begin(); i<n-1; it++)
	{
		if (it->second > ir->second)
		{
			j=1;
		}
		ir++;
		i++;
	}
	if (j) { cout << "Happy Alex"; }
	else { cout << "Poor Alex"; }
}
