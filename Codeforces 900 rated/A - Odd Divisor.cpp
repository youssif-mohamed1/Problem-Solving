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
#define neg cout<<"-1";
#define yes cout<<"YES";
#define no cout<<"NO";
#define ok cout<<"OK";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
#define ld long double
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


double e = 2.718281828;
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


template<typename T>
void display(vector<T>v)
{
	for (auto it : v)
	{
		cout << it;
	}
}


int mod(string x, int m)
{
	int c = 0;
	int v = x.size();
	for (int i = 0; i < v; i++)
	{
		c = (c * 10 + int(x[i]) - '0') % m;
	}
	return c;
}


template<typename t>
double log_a_to_base_b(t a, t b)
{
	return log2(a) / log2(b);
}


template<typename y>
double ln(y a)
{
	return log2(a) / log2(e);
}

bool divtest(ll n, ll a)
{
	return n % a == 0;
}

bool has_odd(ll n)
{
	/*ll k = sqrt(n);
	if (n % 3 == 0)
	{
		return true;
	}
	for (ll i = 5; i < k;)
	{
		for (ll j = 2; i <= k / 2; j++)
		{
			if (k % j == 0)
			{
				goto here;
			}
		}
		if (n % i == 0)
		{
			return true;
		}
	here:
		i++;
	}
	return false;*/
	//for (int i = 3; i <= n; i += 2)
	//{
	//	if (n % i == 0)
	//	{
	//		return true;
	//	}
	//}
	//return false;
	while (EOcheck(n))
	{
		n /= 2;
	}
	if (n == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void test()
{
	ll n;
	cin >> n;
	if (!EOcheck(n))
	{
		yes;
	}
	else
	{
		if (has_odd(n))
		{
			yes;
		}
		else
		{
			no;
		}
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

/*
* 
3
1 1 1

*/

