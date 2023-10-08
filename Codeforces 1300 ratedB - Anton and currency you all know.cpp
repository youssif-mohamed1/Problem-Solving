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
int whoWins(pair<pair<pair<ll, ll>, ll>, pair<ll, int>>a, pair<pair<pair<ll, ll>, ll>, pair<ll, int>>b) { if (a.F.F.F == b.F.F.F) { if (a.F.F.S == b.F.F.S && a.F.S == b.F.S || a.F.F.S < b.F.F.S && a.F.S > b.F.S || a.F.F.S > b.F.F.S && a.F.S < b.F.S) { if (a.S.S > b.S.S) { return 1; } else { return 2; } } else { if (a.F.F.S > b.F.F.S && a.F.S == b.F.S || a.F.F.S > b.F.F.S && a.F.S > b.F.S || a.F.F.S == b.F.F.S && a.F.S > b.F.S) { return 1; } else { return 2; } } } else { if (a.F.F.F > b.F.F.F) { return 1; } else { return 2; } } }
//============================================================================================================================================================================================================================================================
bool compare(pair<int, int>a, pair<int, int>b) {
    return a.second < b.second;
}
void solve() {
    string x;
    cin >> x;
    int l = x.size(), last = x[l - 1] - '0';;
    vector<pair<int, int>>m;
    fpi(l) {
        if ((int(x[i]) - '0') % 2 == 0) {
            m.push_back({ int(x[i]) - '0' ,i });
        }
    }
    int k = m.size();
    if (k == 0) {
        cout << -1; return;
    }
    fpi(k) {
        if (m[i].first < last) {
            x[m[i].second] = last + '0';
            x[l - 1] = m[i].first + '0';
            cout << x; return;
        }
    }
    for (int i = k - 1; i >= 0; i--) {
        if (m[i].first > last) {
            x[m[i].second] = last + '0';
            x[l - 1] = m[i].first + '0';
            cout << x; return;
        }
    }

}

int main() { YJooe(); int t = 1; /*cin >> t; */while (t--) { solve(); el; } }