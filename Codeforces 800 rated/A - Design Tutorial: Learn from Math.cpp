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
bool EOcheck(int n);
bool primecheck(int n);
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
	int n,k,l,r,i=1;
	cin >> n;
	if (EOcheck(n))
	{
		if (EOcheck(n / 2))
		{
			cout << n / 2; sp; cout << n / 2; sp;
		}
		else
		{
			if (!primecheck(n / 2))
			{
				cout << n / 2; sp; cout << n / 2; sp;
			}
			else
			{
				cout << (n / 2) - 1; sp; cout << (n / 2) + 1; sp;
			}
		}
	}
	else
	{
		l = (n / 2);
		r = ((n / 2) + 1);
		if (!EOcheck(l)) { k = l; }
		else { k = r; }
		if (!primecheck(k))
		{
			cout << n / 2; sp; cout << (n / 2) + 1;
		}
		else
		{
			l = (n / 2) - i;
			r = ((n / 2) + 1) + i;
			if (!EOcheck(l)) { k = l; }
			else { k = r; }
			i++;
			while (primecheck(k))
			{
				l = (n / 2) - i;
				r = ((n / 2) + 1) + i;
				if (!EOcheck(l)) { k = l; }
				else { k = r; }
				i++;
			}
			cout << l; sp; cout << r; sp;
		}
	}
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
bool EOcheck(int n)
{
	return n % 2 == 0;
}

