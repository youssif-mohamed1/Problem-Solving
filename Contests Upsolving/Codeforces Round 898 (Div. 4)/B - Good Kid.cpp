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
	//#pragma warning(disable: 4996)
	//	freopen(R"(input.txt)", "r", stdin);
	//	freopen(R"(output.txt)", "w", stdout);
	//#pragma warning(default: 4996)
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
	return false ? n == 0 : floor(log2(n) / log2(10)) == ceil(log2(n) / log2(10));
}

ll gcd(ll a, ll b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

ll powermod(ll x, ll y, ll p) {
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
	string binary = "";
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
		if (n % 2 == 1)
			result = result * x;
		x = x * x;
		n = n / 2;
	}
	return result;
}

void solve() {
	ll n;
	cin >> n;
	vll v(n);
	fpi(0, n)cin >> v[i];
	ll maxi = 0;
	fpi(0, n) {
		ll p = v[i]+1;
		fpj(0, n) {
			if (i != j) {
				p *= v[j];
			}
		}
		maxi = max(maxi, p);
	}
	cout << maxi;
}

signed main() {
	YJooe();
	ll t = 1;
	cin >> t;
	while (t--) solve(), el;
}