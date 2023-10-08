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
#include <numeric>

using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/


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

bool is_prime(long long n) {
	if (n <= 1) return false;  // 1 is not a prime number
	if (n <= 3) return true;   // 2 and 3 are prime numbers

	// Check if n is divisible by 2 or 3
	if (n % 2 == 0 || n % 3 == 0) return false;

	// Check if n is divisible by any number of the form 6k±1 up to sqrt(n)
	for (long long i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}

	// n is a prime number
	return true;
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
	while (!(n & 1))
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


int evens(int c)
{
	int k = 1;
	while (!(c & 1))
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

int binarySearch(vector<long> arr, long target) {
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


bool cmp(long long a, long long b) {
	return a > b;
}

bool search_list(list<int>l, int key)
{
	auto it = find(l.begin(), l.end(), key);
	return it != l.end();
}


void test()
{
	int n, m,k,u;
	cin >> n >> m;
	map<int, int>mm;
	vector<int>v(n);
	vector<int>vv(n+1,0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (mm[v[i]] == 0)
		{
			vv[i] += (1+vv[i+1]);
			mm[v[i]]++;
		}
		else
		{
			vv[i] += (0 + vv[i + 1]);
		}
	}

	while (m--)
	{
		cin >> k;
		cout << vv[k-1];
		el;
	}
}

int main()
{
	YJooe
		int t = 1;
	//cin >> t;
	while (t--) { test(); }
	ret;
}