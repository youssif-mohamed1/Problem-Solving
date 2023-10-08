#include<iostream>
#include<vector>
#include<math.h>
#include<cmath>
#include<algorithm>
#include<map>
#include<bitset>
///#include<bits/stdc++.h>
using namespace std;

#define ll long long;
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
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

long long divo(long long n, long long start) {
    if (n % 2 == 0) {
        return 2;
    }
    for (long long i = start; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

void test() {
    int n, m;
    string x,y;
    cin >> n >> m;
    map<string,string>v;
    for (int i = 0; i < m; i++) cin >> x >> y, v[x] = y;;
    while (n--) {
        cin >> x;
        if (v[x].length() < x.length()) {
            cout << v[x];
        }else {
            cout << x;
        }
        cout << " ";
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n\n\n"; }
}

