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
	string x;
	cin >> x;
	int j = x.size(), res = 0;
	vector<int>v(j);
	for (int i = 0; i < j; i++)
	{
		res = (int(x[i]) - '0');
		if (res > 4)
		{
			if (res!=9 || i>0)
			{
				res = 9 - res;
			}
		}
		v[i] = res;
	}
	for (auto it : v)
	{
		cout << it;
	}
}
