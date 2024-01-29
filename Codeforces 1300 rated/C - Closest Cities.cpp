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

bool isPrime(ll n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6) { //6k+-1
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

ll sum_0_to_n(ll n) {
    return (n) * (n + 1) / 2;
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
        n >>= 1;
        x = x * x;
    }
    return result;
}

long long getcount(long long n, int k) {
    ++n;
    long long res = (n >> (k + 1)) << k;
    if ((n >> k) & 1)
        res += n & ((1ll << k) - 1);
    return res;
}

ll lastPoweOf2(ll n) {
    ll ans = 0;
    for (int i = 32; i >= 0; i--) {
        if ((n >> i) & 1) {
            return i;
        }
    }
    return 0;
}
bool is_perfect_square(ll n) {
    ll sq = sqrt(n);
    return sq * sq == n;
}

vector<pair<ll, ll>> prime_factorization(ll n) { // O(sqrt(N))
    vector<pair<ll, ll>>v;
    for (ll i = 2; i * i <= n; i++) {
        ll c = 0;
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i; c++;
            }
            v.push_back({ i,c });
        }
    }
    if (n > 1)v.push_back({ n,1 });
    return v;
}

ll dx[4] = { 1,0,-1,0 };
ll dy[4] = { 0,1,0,-1 };
bool valid(ll x, ll y) {
    return x < 3 && x >= 0 && y < 3 && y >= 0;
}

ll floorSqrt(ll x)
{
    if (x == 0 || x == 1)
        return x;
    ll i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}

bool Greater(int a, int b) {
    return a > b;
}

template<typename T1,typename T2>
struct Pair {
    T1 first;
    T2 second;
};

ll nC2(ll n) {
    return n * (n - 1) / 2;
}

ll nC3(ll n) {
    return n * (n - 1) * (n - 2) / 6;
}

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    vll pref(n + 1), suff(n + 1);
    fpi(0, n) {
        cin >> v[i];      
    }
    pref[1] = suff[n-1] = 1;
    fpi(1, n - 1) {
        if (v[i + 1] - v[i] < v[i] - v[i - 1]) {
            pref[i + 1] = 1;
        }
        else {
            pref[i + 1] = v[i + 1] - v[i];
        }
    }
    fpi(1, n - 1) {
        if (v[i + 1] - v[i] > v[i] - v[i - 1]) {
            suff[i] = 1;
        }
        else {
            suff[i] = v[i] - v[i - 1];
        }
    }
    reverse(all(suff));
    fpi(1, n + 1) {
        pref[i] += pref[i - 1];
        suff[i] += suff[i - 1];
    }
    ll m;
    cin >> m;
    while (m--) {
        ll a, b;
        cin >> a >> b;
        if (a < b) {
            cout << pref[b-1] - pref[a-1];
        }
        else {
            cout << suff[n-b] - suff[n-a];
        }
        el;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        el;
    }
}