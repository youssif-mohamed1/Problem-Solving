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
//#include<bits/stdc++.h>
//=================================================================/*~~~~~~~~~~YJooe~~~~~~~~~~*/
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define el cout<<endl
#define el3 cout<<endl<<endl<<endl
#define sp cout<<" "
#define fpi(n) for(int i = 0 ; i < n ; i++)
#define fpj(n) for(int j = 0 ; j < n ; j++)
#define out(v) for (auto & it : v) cout << it << ' '
#define all(s) s.begin(),s.end()
#define sz(x) (ll)(x).size()
#define F first
#define S second
//==================================================Functions Block===========================================================================================================================================================================================
void YJooe() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); /*freopen("input.txt", "r", stdin);*//* freopen("output.txt", "w", stdout);*/ }
bool isPrime(ll n) { if (n <= 1) { return false; }if (n <= 3) { return true; }if (n % 2 == 0 || n % 3 == 0) { return false; }ll sqrtN = sqrt(n); for (ll i = 5; i <= sqrtN; i += 6) { if (n % i == 0 || n % (i + 2) == 0)return false; }return true; }
bool isPowerOfTwo(int n) { return false ? n == 0 : floor(log2(n)) == ceil(log2(n)); }
bool isPowerOfTen(int n) { return false ? n == 0 : floor(log2(n) / log2(10)) == ceil(log2(n) / log2(10)); }
ll gcd(ll a, ll b) { if (a == 0) { return b; }return gcd(b % a, a); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll noOfDivisors(ll n) { int count = 0, sqrtN = sqrt(n); for (int i = 1; i * i <= n; i++) { if (n - i * (n / i) == 0) { count += 2; } }if (n == sqrtN * sqrtN) { count--; }return count; }
ll powermod(ll x, ll y, ll p) { ll res = 1; x = x % p; if (x == 0) { return 0; }while (y > 0) { if (y & 1) { res = (res * x) % p; }y = y >> 1; x = (x * x) % p; }return res; }
ll nCr(ll n, ll r) { ll num = 1, den = 1; for (int i = 1; i <= r; i++) { num *= (n - i + 1); den *= i; ll g = gcd(num, den); num /= g, den /= g; }return num; }
bool compareParity(long a, long b) { return (a & 1 && b & 1) || (!(a & 1) && !(b & 1)); }
bool Greater(ll a, ll b) { return a > b; }
bool isFactorial(ll n) { if (n == 1) { return true; }for (int i = 2; i < 17; i++) { ll fact = 1; for (int j = i; j >= 2; j--) { fact *= j; }if (fact == n) { return true; } }return false; }
string DecimalToBinary(ll n) { if (n == 0) { return "0"; }string binary = ""; while (n > 0) { binary += to_string(n % 2); n /= 2; }reverse(binary.begin(), binary.end()); return binary; }
ll factorial(ll n) { if (n <= 1) { return 1; }return n * factorial(n - 1); }
void generateFact(vector<ll>& v) {for (int i = 1; i <= 14; i++) {v.push_back(factorial(i));}}
ll sum_0_to_n(ll n) { return (n) * (n + 1) / 2; }
ll sum_m_to_n(ll m, ll n) { return sum_0_to_n(n) - sum_0_to_n(m); }
//============================================================================================================================================================================================================================================================
int whoWins(pair<pair<pair<ll, ll>, ll>, pair<ll, int>>a, pair<pair<pair<ll, ll>, ll>, pair<ll, int>>b) {
    if (a.F.F.F == b.F.F.F) {
        if (a.F.F.S == b.F.F.S && a.F.S == b.F.S || a.F.F.S < b.F.F.S && a.F.S > b.F.S || a.F.F.S > b.F.F.S && a.F.S < b.F.S) {
            if (a.S.S > b.S.S) {
                return 1;
            }
            else {
                return 2;
            }
        }
        else {
            if (a.F.F.S > b.F.F.S && a.F.S == b.F.S || a.F.F.S > b.F.F.S && a.F.S > b.F.S || a.F.F.S == b.F.F.S && a.F.S > b.F.S) {
                return 1;
            }
            else {
                return 2;
            }
        }
    }
    else {
        if (a.F.F.F > b.F.F.F) {
            return 1;
        }else{
            return 2;
        }
    }
}
void solve() {
    ll n, k, maxi1 = 0, maxi2 = 0,a=0,one=0,two=0;
    cin >> n;
    vector<pair<pair<pair<ll, ll>, ll>,pair<ll, int>>>wrest(2);     // totall sum, lexio length, max ele , f or s, last or not
    vector<ll>w0;
    vector<ll>w1;
    wrest[0].S.F = 1; wrest[0].S.S = 0; wrest[1].S.F = 2; wrest[1].S.S = 0;
    fpi(n) {
        cin >> k;
        if (k > 0) {
            wrest[0].F.F.F += k;
            wrest[0].F.F.S=0;
            maxi1 = k;
            if (i == n - 1) {
                wrest[0].S.S = 1;
            }
            w0.push_back(k);
            one++;
        }
        else {
            k = abs(k);
            wrest[1].F.F.F += k;
            wrest[1].F.F.S=0;
            maxi2 = k;
            int maxi = wrest[1].F.S;
            if (i == n - 1) {
                wrest[1].S.S = 1;
            }
            w1.push_back(k);
            two++;
        }
        
    }
    bool flag = 0;
    for (int i = 0; i < min(one, two); i++) {
        if (w0[i] > w1[i]) {
            wrest[0].F.S = 1;
            wrest[1].F.S = 0;
            flag = 1;
            break;
        }
        else if (w0[i] < w1[i]) {
            wrest[0].F.S = 0;
            wrest[1].F.S = 1;
            flag = 1;
            break;
        }
    }
    if (!flag) {
        wrest[0].F.S = 0;
        wrest[1].F.S = 0;
    }
    int wwe=whoWins(wrest[0],wrest[1]);
    if (wwe == 1)
        cout << "first";
    else
        cout << "second";
}

int main() { YJooe(); int t = 1; /*cin >> t;*/ while (t--) { solve(); el; } }
/*//////////////////////////////////////////////////////////////////////////////Notes Block///////////////////////////////////////////

__builtin_popcount(n) this function returns the number of ones in the binary representation of n
n^m XOR between n and m
for (int j = 0; j < n; j++) tot += (a[i] >> j & 1) != (a[m] >> j & 1); ---> shifting bit by bit and compare them to count the number of changes
if (i & (1 << j)) if the jth bit in the binary representation of i is 1 will activate the condition
*/
