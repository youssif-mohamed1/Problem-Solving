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

//template<typename t>
ll log_a_to_base_b(ll a, ll b)
{
	return log2(a) / log2(b);
}

bool divtest(ll n, ll a)
{
	return n % a == 0;
}

bool multidivtest(ll n, ll a)
{
	while (n!=6)
	{
		n = sqrt(n);
		if (n < 6) {
			return false;
		}
	}
	return true;
}

//void test()
//{
//	ll n, m;
//	//string n;
//	cin >> n;
//	m = n;
//	//string u;
//	//u = to_string(n);
//	//int l = u.size();
//	ll count = 0;
//	if (n == 1) { cout << 0; goto out; }
//	else if (n == 2) { neg; goto out; }
//	else if (n % 10 != 5 && n % 10 != 0)
//	{
//		while (!multidivtest(n, 6))
//		{
//			n *= 2;
//			count++;
//			if (count >= sqrt(m))
//			{
//				neg;
//				goto out;
//			}
//		}
//
//		cout << count + log_a_to_base_b(n, 6);
//	}
//	else
//	{
//		neg;
//	}
//out:
//	el3;
//	//if (EOcheck(int(u[l - 1]) - '0') || (int(u[l - 1]) - '0')==9)
//	//{
//		/*while (u[l - 1] != 6)
//		{
//			n *= 2;
//			count++;
//		}
//		if (n % 6 == 0)
//		{
//			cout << (n / 6) + count;
//		}*/
//		/*	else
//			{
//				while (n % 6 != 0)
//				{
//					n *= 2;
//				}
//			}*/
//			//while (n % 6 != 0)
//			//{
//			//	n *= 2;
//			//}
//		//}
//		//else
//		//{
//
//
//		/*l = sqrt(n);*/
//		//if (n%6!=0 || n%3!=0)
//		//{
//		//	neg;
//		//}
//		//else
//		//{
//
//		//}
//		//if (n % 3 != 0 && n % 6 != 0)
//		//{
//		//	neg;
//		//}
//		//else if (n % 3 == 0 && n % 6 != 0 )
//		//{
//		//	cout << ((n * 2) / 6) + 1;
//		//}
//		//else if (n % 3 == 0 && n % 6 == 0)
//		//{
//		//	cout << n / 6;
//		//}
//	el;
//}

void test()
{
	ll n, s=0, v=0,m;
	cin >> n;
	m = n;
	if (n > 1)
	{
		while (n % 2 == 0)
		{
			s++;
			n /= 2;
		}
		while (n % 3 == 0)
		{
			v++;
			n /= 3;
		}
		if (n == 1)
		{
			if (v >= s)
			{
				cout << (v - s) + log_a_to_base_b(m * pow(2, (v - s)), 6);
			}
			else
			{
				neg;
			}
		}
		else
		{
			neg;
		}
	}
	else
	{
		cout << 0;
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




