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

bool EOcheck(int n)
{
	return n % 2 == 0;
}

bool primecheck(int n)
{
	if (n == 2 || n == 3) { return true; }
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

//template<typename T>
//
//void display(vector<T>v)
//{
//	for (auto it : v)
//	{
//		cout << it;
//	}
//}

void test()
{
	ll n;
	cin >> n;
	ll mid = n / 2;
	vector<ll>v;
	if (EOcheck(n / 2))
	{
		yes; el;
		int j = 0;
		for (int i = 2; i <= n; i += 2)
		{
			v.push_back(i);
			cout << i; sp;
		}
		j = 0;
		int i = 1;
		int y = v[(n / 2)-1] ;
		for (; i < y-1; i += 2)
		{
			cout << i; sp;
		}
		cout << n + ((n / 2)-1);
	}
	else
	{
		no;
	}
	el;
}

int main()                                    /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	YJooe
	int t = 1;
	cin >> t;
	while (t--) { test(); }
	ret;
}




