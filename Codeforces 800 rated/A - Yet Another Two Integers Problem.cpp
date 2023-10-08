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
	int t = 1;
	cin >> t;
	while (t--) { test(); }
	ret;
}
void test()
{
	ll a, b,c,d=0,i=10;
	cin >> a >> b;
	c = abs(a - b);
	while (c != 0)
	{
		d += c / i;
		c = c % i;
		i--;
	}
	cout << d;
	el;
}


