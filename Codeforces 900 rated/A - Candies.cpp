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
	cin >> t;
	while (t--) { test(); }
	ret;
}
void test()
{
	ll n;
	cin >> n;
	ull sum=0,x=1;
	for (int k = 0; k>-1; k++)
	{
		sum += pow(2, k);
		if (n%sum == 0 && sum!=1)
		{
			x = n / sum;
			break;
		}
		else if (sum >= n)
		{
			break;
		}
	}
	cout << x; el;
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

