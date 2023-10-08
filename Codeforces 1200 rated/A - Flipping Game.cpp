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
#include <fstream>
#include <queue>
#include<stack>
#include<forward_list>
#include<bitset>

using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define INF 0x3f3f3f3f
#define INFll 0x3f3f3f3f3f3f3f3f3f
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
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (long long i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}
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

int modExp(int a, int b, int m) //mod of big numbers
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


long long factorial(long long n, long long k) {  // fact
	long long res = 1;
	for (ll i = n; i >= k; i--) {
		res *= i;
	}
	return res;
}

ll combination(ll n, ll r) {   //nCr
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



bool cmp(long long a, long long b) { //used in sort() method to sort desc.
	return a > b;
}

bool search_list(list<int>l, int key) // searching in an list
{
	auto it = find(l.begin(), l.end(), key);
	return it != l.end();
}

bool compare(pair<int, pair<int, int>>a, pair<int, pair<int, int>>b) // used in sort() method which sort vector of pairs
{
	return a.first > b.first;
}

int binarysearch(vector<int>v, int size, int key)
{
	int l = 0, r = size - 1;
	int m = (l + r) / 2;
	while (l < size - 1 && r >= 0)
	{
		if (v[m] == key) return m;
		else if (v[m] > key)
			r = m - 1;
		else
			l = m + 1;
		m = (l + r) / 2;
	}
	return -1;
}

bool isPalindrome(vector<long long>arr, int n, long long x) {
	int i = 0, j = n - 1;
	while (i <= j) {
		if (arr[i] % x != arr[j] % x) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

void test()
{
	int n;
	cin >> n;
	int zeroes = 0, ones = 0, maxy = 0;
	vector<int>v(n + 1);
	int u = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		if (v[i] == 1)
		{
			ones++;
			zeroes--;
		}
		else
		{
			zeroes++;
		}
		maxy = max(maxy, zeroes);
		if (zeroes < 0) { zeroes = 0; }
	}
	if (ones == n)
	{
		cout << n - 1 << endl;
	}
	else
	{
		cout << ones + maxy << endl;
	}
}



int main()
{
	//freopen("NameOfFile.in", "r", stdin);
	YJooe
		int t = 1;
	//cin >> t;
	while (t--) { test(); }
	ret;
}