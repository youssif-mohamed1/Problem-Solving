#include<iostream>	
#include<iomanip>
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
#include<numeric>
#include<stdio.h>

using namespace std;						/*~~~~~~~~~~YJooe~~~~~~~~~~*/


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


bool EOcheck(int n) // old version
{
	return n % 2 == 0;
}

bool is_odd(int n) // updated version
{
	return n & 1;
}

bool is_prime(int n)
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

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int hcf(int n)
{
	for (int i = n - 1; i >= 1; i--)
	{
		if (n % i == 0)
		{
			return i;
		}
	}
}

bool has_reminder(int n, int u)
{
	return n % u != 0;
}

class Counter {
private:
	int c;
public:
	Counter()
	{
		this->c = 0;
	}
	Counter(int c)
	{
		this->c = c;
	}
	Counter(const Counter& obj)
	{
		this->c = obj.c;
	}
	void set(int c)
	{
		this->c = c;
	}
	int get()
	{
		return c;
	}
	void increase()
	{
		(this->c)++;
	}
	void set(int c, int old)
	{
		this->c = old + c;
	}
};

int evens(int c)
{
	int k = 1;
	while (EOcheck(c))
	{
		c /= 2;
		k *= 2;
	}
	return k;
}

int modExp(int a, int b, int m)
{
	int result = 1;
	a = a % m; 
	while (b > 0)
	{
		if (b & 1)
		{
			result = (result * a) % m;
		}
		b = b >> 1;
		a = (a * a) % m;
	}
	return result;
}

ll factorial(ll n, ll k) {
	ll res = 1;
	for (ll i = n; i >= k; i--) {
		res *= i;
	}
	return res;
}

ll combination(ll n, ll r) {
	if (n < r) {
		return 0;
	}
	if (r == 0 || r == n) {
		return 1;
	}
	ll num = factorial(n, n - r + 1);
	ll den = factorial(r, 1);
	return num / den;
}

int binarySearch(vector<int> arr, int target) {
	int left = 0;
	int right = arr.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

void test()
{
	int n;
	long double l, k, m, b = 0, le, ma,lo;
	cin >> n >> l;
	set<long long>s;
	auto it = s.begin();
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		it = s.emplace_hint(it, k);
	}
	it = s.begin();
	auto ir = s.begin();
	ir++;
	n = s.size();
	le = *it;
	for (int i = 0; i < n - 1; i++)
	{
		m = abs(*it - *ir);
		b = max(b, m);
		it++; ir++;
	}
	ir--;
	ma = abs(l - *it);
	lo = max(ma, le);
	if (lo > b / 2) { cout << fixed << lo << setprecision(15); }
	else
	{
		cout <<fixed<<double(b/2)<<setprecision(15);
	}
}

int main()
{
	YJooe
		int t = 1;
	//	cin >> t;
	while (t--) { test(); }
	ret;
}


