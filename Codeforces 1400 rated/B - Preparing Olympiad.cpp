/*================================================================
||                        يا رب
||                بسم الله الرحمن الرحيم
||                اللهم صلي علي سيدنا محمد
||
==================================================================
||               سَبِّحِ اسْمَ رَبِّكَ الأَعْلَى
||               الَّذِي خَلَقَ فَسَوَّى
||               وَالَّذِي قَدَّرَ فَهَدَ
||               وَالَّذِي أَخْرَجَ الْمَرْعَى
||               فَجَعَلَهُ غُثَاءً أَحْوَى
||               سَنُقْرِؤُكَ فَلا تَنسَى
||               إِلاَّ مَا شَاء اللَّهُ إِنَّهُ يَعْلَمُ الْجَهْرَ وَمَا يَخْفَى
||               وَنُيَسِّرُكَ لِلْيُسْرَى
||               فَذَكِّرْ إِن نَّفَعَتِ الذِّكْرَى
||
==================================================================*/
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <stack>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include<map>
#include<unordered_map>
#include<unordered_set>

//================================================================/*~~~~~~~~~~YJooe~~~~~~~~~~*/

using namespace std;

#define el cout<<endl;
#define el3 cout<<endl<<endl<<endl;
#define sp cout<<" ";
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    long long sqrtN = sqrt(n);
    for (long long i = 5; i <= sqrtN; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isPowerOfTwo(int n) {
    return false ? n == 0 : floor(log2(n)) == ceil(log2(n));
}

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int noOfDivisors(int n) {
    int count = 0;
    int sqrtN = sqrt(n);
    for (int i = 1; i * i <= n; i++)
    {
        if (n - i * (n / i) == 0) count += 2;
    }
    if (n == sqrtN * sqrtN) count--;
    return count;
}

long long powermod(long long x, long long y, long long p) {
    long long res = 1;
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

long long nCr(int n, int r) {
    long long num = 1, den = 1;
    for (int i = 1; i <= r; i++) {
        num *= (n - i + 1);
        den *= i;
        long long g = gcd(num, den);
        num /= g, den /= g;
    }

    return num;
}

void solve() {
    int n, x, cnt = 0;
    long l, r;
    cin >> n >> l >> r >> x;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < (1 << n); i++) {
        int mini = 1e9, maxi = 0, count = 0;
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                count++;
                sum += v[j];
                mini = min(mini, v[j]);
                maxi = max(maxi, v[j]);
            }
        }
        if (count >= 2 && sum >= l && sum <= r && maxi - mini >= x) {
            cnt++;
        }
    }
    cout << cnt;

}

int main() {
    YJooe int t = 1; //cin >> t;
    while (t--) { solve(); el; }
}

