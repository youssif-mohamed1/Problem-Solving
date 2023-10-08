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

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define each(a,x) for(auto &a:x)

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

bool compare(pair<int,int>a, pair<int, int>b) // used in sort() method which sort vector of pairs
{
	return a.first < b.first;
}

ll sum(ll k)
{
	return (k) * (k + 1) / 2;
}
ll sum(ll m, ll k)
{
	if (m == 1)
		return sum(k);
	else
		return sum(k) - sum(m - 1);
}

ll seq(ll v, ll x)
{
	return (v * x) / (x - 1);
}

ll seq1(ll v, ll x)
{
	long long ans = 0;
	long long res = 1;
	for (long long i = 0; res != 0; i++)
	{
		res = v / (pow(x, i));
		ans += res;
	}
	return ans;
}

long long binarysearch(ll initial, vector<ll>v, ll size, ll key)
{
	ll l = initial, r = size;
	ll mini = 1e18;
	while (r > l)
	{
		ll m = (l + r) / 2;
		if (v[m] == key)
		{
			return m;
		}
		else if (v[m] > key)
		{
			mini = min(mini, m);
			r = m;
		}
		else
		{
			//maxy = max(maxy, m);
			l = m + 1;
		}
	}
	return mini;
}

ll power_of_two(ll k) {
	if (k == 0) {
		return 1;
	}
	ll res = power_of_two(k / 2);
	if (k % 2 == 0) {
		return res * res;
	}
	else {
		return 2 * res * res;
	}
}

void generateNumbers(int still, int current, vector<int>& v, map<int, int>& m,double &n)
{
	if (still == 0)
	{
		v.push_back(current);
		m[current]++;
		n++;
		return;
	}
	else
	{
		generateNumbers(still - 1, current + 1, v, m,n);
		generateNumbers(still - 1, current - 1, v, m,n);
	}
}

void test()
{
	string x, c;
	cin >> x >> c;
	int sent = 0,xl=x.length();
	for (int i = 0; i < xl; i++)
	{
		if (x[i] == '+')
		{
			sent++;
		}
		else
		{
			sent--;
		}
	}
	int recieved = 0;
	int count = 0;
	for (int i = 0; i < xl; i++)
	{
		if (c[i] == '+')
		{
			recieved++;
		}
		else if (c[i] == '-')
		{
			recieved--;
		}
		else
		{
			count++;
		}
	}
	vector<int>v;
	map<int,int>m;
	double n=0;
	generateNumbers(count, recieved, v, m,n);
	/*for (auto it : v)
	{
		cout << it;
	}el;
	for (auto ir : m)
	{
		cout << ir.first; sp; cout << ir.second; el;
	}el;*/
	if (m.find(sent) != m.end())
	{
		double v = double(double(m[sent]) / n);

			cout << fixed << setprecision(12) << v;
	}
	else
	{
		double v = 0;
		cout << fixed << setprecision(12)<<v;
	}
}


int main()
{
//	freopen("game.in", "r", stdin);
	YJooe
		int t = 1;
	//cin >> t;
	while (t--) { test(); el; }
}

