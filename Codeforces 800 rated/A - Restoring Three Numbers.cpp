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
#define D cout<<"D";
#define star cout<<"*";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
#define ld long double
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef pair<int, int>intp;
int n, k, l,m;
void test();
//bool negcheck(ll a, ll b, ll c);
//bool check(int d);
int main()                                    /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	YJooe
	int t = 1;
	//cin >> t;
	while (t--) { test(); }
	ret;
}
void test()
{
	ll n;
	multiset<ll>s;
	auto it = s.begin();
	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		it = s.emplace_hint(it, n);
	}
	auto end = s.end();
	auto ir = s.begin();
	end--;
	for (int i=0;i<3; i++)
	{
		cout << *end - *ir; sp;
		ir++;
	}
}
//bool check(int n) // EVEN, ODDS
//{
//	return n % 2 == 0;
//}
//bool negcheck(ll a, ll b, ll c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}

