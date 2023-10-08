#include<iostream>
#include <cstdio>
#include <stdio.h>
#include<algorithm>
#include<iterator>
#include<utility>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<forward_list>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<math.h>
#include<cmath>
#include<string>
#include<cstring>
#include<iomanip>
#include<bitset>
/*~~~~~~~~~~YJooe~~~~~~~~~~*/
//#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define el std::cout<<endl
#define el3 std::cout<<endl<<endl<<endl
#define sp std::cout<<" "
#define fpi(s,e) for(int i=s;i<e;i++)
#define fpj(s,e) for(int j=s;j<e;j++)
#define all(s) s.begin(),s.end()
#define sz(x) (ll)(x).size()

void YJooe() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}
//
//void files() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//}


void meta_hacker_cup(int i) {
	cout << fixed << setprecision(0);
	cout << "Case #" << i << ": ";
}

bool isPrime(ll n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (ll i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}

bool isPowerOfTwo(ll n) {
	if (n == 0)
		return 0;
	return !(n & (n - 1));
}

bool isPowerOfTen(int n) {
	return floor(log2(n) / log2(10)) == ceil(log2(n) / log2(10));
}

ll gcd(ll a, ll b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

ll power_mod(ll x, ll y, ll p) { // log(n)
	ll res = 1;
	x = x % p;
	if (x == 0)
		return 0;
	while (y > 0) {
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

ll nCr(ll n, ll r) {
	ll num = 1, den = 1;
	for (int i = 1; i <= r; i++) {
		num *= (n - i + 1);
		den *= i;
		ll g = gcd(num, den);
		num /= g, den /= g;
	}
	return num;
}

bool Greater(ll a, ll b) {
	return a > b;
}

string DecimalToBinary(ll n) {
	if (n == 0) {
		return "0";
	}
	string binary;
	while (n > 0) {
		binary += to_string(n % 2);
		n /= 2;
	}
	reverse(binary.begin(), binary.end()); return binary;
}

ll BinaryToDecimal(string binary) {
	ll decimal = 0, base = 1, l = binary.length();
	for (ll i = l - 1; i >= 0; i--) {
		if (binary[i] == '1')
			decimal += base;
		base *= 2;
	}
	return decimal;
}

ll factorial(ll n) {
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}

ll sum_0_to_n(ll n) {
	return (n) * (n + 1) / 2;
}

ll noOfDivisors(ll n) {
	ll count = 0, sqrtN = sqrt(n);
	for (ll i = 1; i * i <= n; i++) {
		if (n - i * (n / i) == 0)
			count += 2;
	}
	if (n == sqrtN * sqrtN)
		count--;
	return count;
}

void sieveOfEratosthenes(vll& composite, int sz) {
	composite[0] = composite[1] = 1;
	for (int i = 2; i * i < sz; i++) {
		if (!composite[i]) {
			for (int j = i * i; j < sz; j += i) {
				composite[j] = 1;
			}
		}
	}
}

ll fastPower(ll x, ll n) {
	ll result = 1;
	while (n > 0) {
		if (n & 1)
			result = result * x;
		n >> 1;
		x = x * x;
	}
	return result;
}

long long getcount(long long n, int k) { // find how many elements have kth bit set up to n
	++n;
	long long res = (n >> (k + 1)) << k;
	if ((n >> k) & 1)
		res += n & ((1ll << k) - 1);
	return res;
}

ll nextP2(ll n) {
	ll ans = 0;
	for (int i = 32; i >= 0; i--) {
		if ((n >> i) & 1) {
			return (1 << (i + 1));
		}
	}
	return 0;
}

ll sumBits[32][1000001];

void prefix2D(vll arr, int n)
{

	for (int i = 0; i < 32; i++) {

		sumBits[i][0] = ((arr[0] >> i) & 1);
		for (int j = 1; j < n; j++) {
			sumBits[i][j] = ((arr[j] >> i) & 1);
			sumBits[i][j] += sumBits[i][j - 1];
		}
	}
}

ll And(ll l, ll r)
{
	ll ans = 0;
	for (int i = 0; i < 32; i++) {
		ll x;
		if (l == 0) {
			x = sumBits[i][r];
		}
		else {
			x = sumBits[i][r] - sumBits[i][l - 1];
		}
		if (x == r - l + 1) {
			ans = (ans | (1 << i));
		}
	}
	return ans;
}

void solve() {
	ll n;
	cin >> n;
	vll v(n);
	fpi(0, n)cin >> v[i];
	prefix2D(v, n);
	ll q;
	cin >> q;
	while (q--) {
		ll l, k;
		cin >> l >> k;
		ll left = l-2, r = n,mid,ans=-1;
		while (left < r - 1) {
			mid = left + r >> 1;
			ll u = And(l - 1, mid);
			if ( u>= k) {
				ans = mid;
				left = mid;
			}
			else {
				r = mid;
			}
		}
		if (ans != -1) {
			ans++;
		}
		cout << ans; el;
	}
}

signed main() {
	YJooe();
	//files();
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		//meta_hacker_cup(i);
		solve();
		el;
	}
}
