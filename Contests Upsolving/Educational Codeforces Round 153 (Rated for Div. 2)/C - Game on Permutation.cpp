/*================================================================
                          يا رب
                اللهم صلي علي سيدنا محمد
==================================================================
                    بسم الله الرحمن الرحيم

                     الْحَمْدُ لِلَّهِ رَبِّ الْعَالَمِينَ

                        الرَّحْمَنِ الرَّحِيم

                        مَالِكِ يَوْمِ الدِّين

                    إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ

                    اهدِنَا الصِّرَاطَ الْمُسْتَقِيمَ

        صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلاَ الضَّالِّينَ

==================================================================
=========================Libraries Block==========================*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<deque>
#include<queue>
#include<list>
#include<forward_list>
#include<stack>
#include<math.h>
#include<cmath>
#include<string>
#include<cstring>
#include<iomanip>
#include<iterator>
#include<array>
#include <stdio.h>
#include<bitset>
//#include<bits/stdc++.h>
//=================================================================/*~~~~~~~~~~YJooe~~~~~~~~~~*/
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
#define el std::cout<<endl
#define el3 std::cout<<endl<<endl<<endl
#define sp std::cout<<" "
#define fpi(n) for(int i = 0 ; i < n ; i++)
#define fpj(n) for(int j = 0 ; j < n ; j++)
#define out(v) for (auto & it : v) cout << it << ' '
#define all(s) s.begin(),s.end()
#define sz(x) (ll)(x).size()
#define F first
#define S second
#define int long long
//#define int long long
vector<bool>composite(1);
//==================================================My Functions Block===========================================================================================================================================================================================
void YJooe() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); /*freopen("input.txt", "r", stdin);*//* freopen("output.txt", "w", stdout);*/ }
bool isPrime(ll n) { if (n <= 1) { return false; }if (n <= 3) { return true; }if (n % 2 == 0 || n % 3 == 0) { return false; }ll sqrtN = sqrt(n); for (ll i = 5; i <= sqrtN; i += 6) { if (n % i == 0 || n % (i + 2) == 0)return false; }return true; }
bool isPowerOfTwo(int n) { return false ? n == 0 : floor(log2(n)) == ceil(log2(n)); }
bool isPowerOfTen(int n) { return false ? n == 0 : floor(log2(n) / log2(10)) == ceil(log2(n) / log2(10)); }
ll gcd(ll a, ll b) { if (a == 0) { return b; }return gcd(b % a, a); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll numberOfDivisors(ll n) { int primes[] = { 2,3,5,7,11,13,17,19 }; ll num = 1, ans = 1; for (int it : primes) { int c = 0; while (n % it == 0) { n /= it; c++; }ans *= c + 1; num *= it; }int all = 0; for (int i = 1; i < num; i++) { bool can = 1; for (int it : primes) { if (i % it == 0) { can = 0; } }if (can) { ll o = i; for (; o * o < n; o += num) { if (n % o == 0) { all += 2; } }if (o * o == n) { all++; } } }return ans * all; } //bb
ll powermod(ll x, ll y, ll p) { ll res = 1; x = x % p; if (x == 0) { return 0; }while (y > 0) { if (y & 1) { res = (res * x) % p; }y = y >> 1; x = (x * x) % p; }return res; }
ll ncr(ll n, ll r) { ll num = 1, den = 1; for (int i = 1; i <= r; i++) { num *= (n - i + 1); den *= i; ll g = gcd(num, den); num /= g, den /= g; }return num; }
bool compareParity(long a, long b) { return (a & 1 && b & 1) || (!(a & 1) && !(b & 1)); }
bool Greater(ll a, ll b) { return a > b; }
bool isFactorial(ll n) { if (n == 1) { return true; }for (int i = 2; i < 17; i++) { ll fact = 1; for (int j = i; j >= 2; j--) { fact *= j; }if (fact == n) { return true; } }return false; }
string DecimalToBinary(ll n) { if (n == 0) { return "0"; }string binary = ""; while (n > 0) { binary += to_string(n % 2); n /= 2; }reverse(binary.begin(), binary.end()); return binary; }
ll factorial(ll n) { if (n <= 1) { return 1; }return n * factorial(n - 1); }
void generateFact(vector<ll>& v) { for (int i = 1; i <= 14; i++) { v.push_back(factorial(i)); } }
ll sum_0_to_n(ll n) { return (n) * (n + 1) / 2; }
ll sum_m_to_n(ll m, ll n) { return sum_0_to_n(n) - sum_0_to_n(m); }
ll mulmod(ll a, ll b, ll m) { ll res = 0; while (b > 0) { if (b & 1)  res = ((m - res) > a) ? res + a : res + a - m; b >>= 1; if (b) a = ((m - a) > a) ? a + a : a + a - m; }return res; } //bb
ll power(ll a, ll b, ll m) { if (b == 0) return 1; if (b & 1) return mulmod(a, power(a, b - 1, m), m); ll tmp = power(a, b / 2, m); return mulmod(tmp, tmp, m); }  //bb
bool prime(ll n) { if (n <= 1)return 0; for (int i = 0; i < 10; i++) { ll tmp = (rand() % (n - 1)) + 1; if (power(tmp, n - 1, n) != 1)return false; }return true; }  //bb
void sieveOfEratosthenes(int sz) { composite[0] = composite[1] = 1; for (int i = 2; i * i < sz; i++) { if (!composite[i]) { for (int j = i * i; j < sz; j += i) { composite[j] = 1; } } } } // nlog(log(n))
bool sortByFirst(pair<ll, ll>a, pair<ll, ll>b) { return a.first < b.first; }
ll maxNoOfConsecutiveFactors(ll n) { for (ll i = 2; i <= n + 1; i++) { if (n - i * (n / i) != 0) { return i - 1; } }return 1; }
ll noOfDivisors(ll n) { ll count = 0, sqrtN = sqrt(n); for (ll i = 1; i * i <= n; i++) { if (n - i * (n / i) == 0) { count += 2; } }if (n == sqrtN * sqrtN) { count--; }return count; }
ll countOnes(ll num) { ll count = 0; while (num != 0) { num = num & (num - 1); count++; }return count; }

using namespace std;
//=================================================================================MY Segment Tree======================================================================================================================================================================
namespace segmentTree {
	const int N = 1e6 + 10;
	int seg[N * 4];
	int arr[N];
	int merge(int l, int r) {
		return l + r;
	}
	void build(int based, int l, int r) {
		if (l == r)
			return void(seg[based] = arr[l]);
		int m = (l + r) >> 1;
		build(based << 1, l, m);
		build(based << 1 | 1, m + 1, r);
		seg[based] = merge(seg[based << 1], seg[based << 1 | 1]);
	}
	int query(int based, int l, int r, int qs, int qe) {
		if (l > qe || r < qs)
			return 0;
		if (l >= qs and r <= qe)
			return seg[based];
		int m = l + r >> 1;
		int left = query(based << 1, l, m, qs, qe);
		int right = query(based << 1 | 1, m + 1, r, qs, qe);
		return merge(left, right);
	}
	void update(int based, int l, int r, int i, int v) {
		if (l == r) {
			seg[based] = v;
			arr[l] = v;
			return;
		}
		int m = l + r >> 1;
		if (i >= l and i <= m) {
			update(based << 1, l, m, i, v);
		}
		else {
			update(based << 1 | 1, m + 1, r, i, v);
		}
		seg[based] = merge(seg[based << 1], seg[based << 1 | 1]);
	}
};
//using namespace segmentTree;
//=======================================================================================================================================================================================================================================================================
void solve() {
	ll n,mini=1e9,maxi=1e9,count=0;
	cin >> n;
	vll v(n);
	fpi(n)cin >> v[i];
	fpi(n) {
		if (v[i] < mini) {
			mini = v[i];
		}
		else {
			if (v[i] <= maxi) {
				count++;
				maxi = v[i];
			}
		}
	}
	cout << count;
}
signed main() { YJooe(); /*preCount();*/ int t = 1; cin >> t; while (t--) { solve(); el; } }