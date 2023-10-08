#include<iostream>	
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<math.h>
#include<cmath>
#include<map>
using namespace std;						/*~~~~~~~~~~YJooe~~~~~~~~~~*/

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

bool isPowerOfTwo(int n)
{
    return false ? n == 0 : floor(log2(n)) == ceil(log2(n));
}

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

void test()
{
    string s,t;
    cin >> s>>t;
    bool automation = 0, array = 0, tree = 0;
    int l = s.size(), k = t.size();
    map<char, int>m1;
    map<char, int>m2;
    if (l < k) {
        cout << "need tree"; return;
    }
    for (int i = 0; i < k; i++) {
        m2[t[i]]++;
    }
    for (int i = 0; i < l; i++) {
        m1[s[i]]++;
    }
    for (auto it : m2) {
        if (m1[it.first] == 0 || it.second>m1[it.first]) {
            cout << "need tree"; return;
        }
    }
    if (l == k) {
        cout << "array";
    }
    else {
        int j = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == t[j]) {
                j++;
            }
        }
        if (j == k) {
            cout << "automaton";
        }
        else {
            cout << "both";
        }
    }
}

int main()
{
    YJooe
        int t = 1;
    //cin >> t;
    while (t--) { test(); cout << "\n"; }
}

