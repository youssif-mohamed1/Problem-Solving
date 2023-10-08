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
//==================================================Black Boxes===============================================================================================================================================================================================
//
//namespace combinatorics { // first initialize using init(size,mod);
//    ll MOD; vector<ll> fac, inv, finv;
//    ll nCr(ll x, ll y) { if (x<0 || y>x)return(0); return(fac[x] * finv[y] % MOD * finv[x - y] % MOD); }
//    ll power(ll b, ll n) { b %= MOD; ll s = 1; while (n) { if (n % 2 == 1)s = s * b % MOD; b = b * b % MOD; n /= 2; }return s; }
//    void init(int n, ll mod) { fac.resize(n + 1); inv.resize(n + 1); finv.resize(n + 1); MOD = mod; fac[0] = inv[0] = inv[1] = finv[0] = finv[1] = 1; for (ll i = 1; i <= n; ++i)fac[i] = fac[i - 1] * i % MOD; for (ll i = 2; i <= n; ++i)inv[i] = MOD - MOD / i * inv[MOD % i] % MOD; for (ll i = 2; i <= n; ++i)finv[i] = finv[i - 1] * inv[i] % MOD; }
//    ll Inv(int x) { return power(x, MOD - 2); }
//    ll catalan(int n) { return (nCr(2 * n, n) * Inv(n + 1)) % MOD; }
//};
//namespace sparceTable { // first initialize using precount() before test cases // for lcm,gcd,max,min within queries
//    const int N = 1e5 + 5;ll s[N], dp[N][22]; int n, q, LOG[N];
//    ll merge(ll a, ll b){return max(a, b);}
//    void build() { for (int i = 0; i < n; i++) { dp[i][0] = s[i]; }for (int mask = 1; (1 << mask) <= n; mask++) { for (int i = 0; i + (1 << mask) <= n; i++) { dp[i][mask] = merge(dp[i][mask - 1], dp[i + (1 << (mask - 1))][mask - 1]); } } }
//    ll query(int l, int r) { int mask = LOG[r - l + 1]; return merge(dp[l][mask], dp[r - (1 << mask) + 1][mask]); }
//    void preCount() { LOG[1] = 0; for (int i = 2; i < N; i++) { LOG[i] = LOG[i >> 1] + 1; } }
//};
//namespace fenWickTree {
//    const int N = 1e5 + 5;
//    struct FenwickTree {
//        ll bit[N] = {}; // edit number change it by adding
//        void add(int idx, ll val) { while (idx < N) { bit[idx] += val; /*editable  + */idx += idx & -idx; } }
//        ll query(int idx) { ll ret = 0; while (idx > 0) { ret += bit[idx]; /*editable  + */idx -= idx & -idx; }return ret; }// from first element to index
//        ll prefix(int l, int r) { return query(r) - query(l - 1); }}tree;
//};
//namespace segmentTree {
//    struct SegmentTree {
//    private:vector<int>seg; int sz, skip = INT_MAX;  /*editable skip, merge: kind*/// skip for counting max-->min, min--->max
//           int merge(int a, int b) { return min(a, b); }
//           void update(int l, int r, int node, int idx, int val) { if (l == r) { seg[node] = val; return; }int mid = l + r >> 1; if (mid < idx) { update(mid + 1, r, 2 * node + 2, idx, val); } else { update(l, mid, 2 * node + 1, idx, val); }seg[node] = merge(seg[2 * node + 1], seg[2 * node + 2]); }
//           int query(int l, int r, int node, int lx, int rx) { if (l > rx || r < lx)return skip; if (l >= lx && r <= rx)return seg[node]; int mid = l + r >> 1; int a = query(l, mid, 2 * node + 1, lx, rx); int b = query(mid + 1, r, 2 * node + 2, lx, rx); return merge(a, b); }
//    public:
//        SegmentTree(int n) { sz = 1; while (sz <= n)sz <<= 1; seg = vector<int>(sz << 1, skip); }
//        void update(int idx, int val) { update(0, sz - 1, 0, idx, val); }
//        int query(int l, int r) { return query(0, sz - 1, 0, l, r); }
//    };
//};
//namespace Dijkstra {//graph
//    //const int N = 1e5 + 5; vector<pair<int, int>>adj[N]; vector<int>cost(N, -1); void dijkstra(int start)  /*start node*/ { priority_queue<pair<int, int>, deque<pair<int, int>>, greater<pair<int, int>>>pq; pq.push({ 0,start }); while (pq.size()) { pair<int, int>p = pq.top(); pq.pop(); int node = p.second, nodecost = p.first; if (cost[node] != -1) { continue; }cost[node] = nodecost; for (auto [node2, cost2] : adj[node]) { if (cost[node2] == -1) { pq.push({ nodecost + cost2,node2 }); } } } }
//};
//namespace INT128 {
//    //__int128 read() {__int128 x = 0, f = 1;char ch = getchar();while (ch < '0' || ch > '9') {if (ch == '-') f = -1;ch = getchar();}while (ch >= '0' && ch <= '9') {x = x * 10 + ch - '0';ch = getchar();}return x * f;}
//   // void print(__int128 x) {if (x < 0) {putchar('-');x = -x;}if (x > 9) print(x / 10);putchar(x % 10 + '0');}
//};

//==================================================Name Spaces===============================================================================================================================================================================================
using namespace std;
// using namespace combinatorics;
// using namespace sparceTable;
// using namespace fenWickTree;
// using namespace segmentTree;
// using namespace Dijkstra;
// using namespace INT128;
//============================================================================================================================================================================================================================================================
bool compare(pair<pair<ll, ll>, ll>a, pair<pair<ll, ll>, ll>b) {
    if (a.second == b.second) {
        return a.first.second > b.first.second;
    }
    return a.second > b.second;
}
void solve() {
    ll n,u;
    ll mo = 1e9;
    cin >> n;
    u = n;
    multimap<ll, ll> maf;
    pair<ll, ll> mi;
    while (n--) {
        ll m, k;
        cin >> m;
        vector<ll> v; 
        fpi(m) {
            cin >> k;
            mo = min(k, mo);
            v.push_back(k); 
        }
        sort(v.begin(), v.end());
        maf.insert(make_pair(v[0], v[1]));
    }
    if (u == 1) {
        cout << mo; return;
    }
    ll sum = 0, h = 0;
    ll moj = 1e9;
    for (auto it : maf) {
        sum += it.second;
        moj = min(it.second, moj);
    }
    cout << (sum + maf.begin()->first) - moj;
}
signed main() { YJooe(); /*preCount();*/ int t = 1; cin >> t; while (t--) { solve(); el; } }