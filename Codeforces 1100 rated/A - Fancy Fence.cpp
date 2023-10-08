#include<bits/stdc++.h>

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

void files(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


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

long long getcount(long long n, int k){ // find how many elements have kth bit set up to n
    ++n;
    long long res = (n >> (k + 1)) << k;
    if ((n >> k) & 1)
        res += n & ((1ll << k) - 1);
    return res;
}

ll nextP2(ll n){
    ll ans=0;
    for(int i=32;i>=0;i--){
        if((n>>i)&1){
            return (1<<(i+1));
        }
    }
    return 0;
}

void solve() {
    ll n, interiorAngles=0, i=3;
    long double angle=0;
    cin>>n;
    while(angle<n){
        interiorAngles=180*(i-2);
        angle = static_cast<long double>(interiorAngles)/i;
        if(angle==n){
            cout<<"YES";return;
        }
        i++;
    }
    cout<<"NO";
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
// C:\Users\yoyo1\CLionProjects\problemSolving