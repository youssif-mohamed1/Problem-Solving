#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
#include<unordered_set>
#include<iomanip>
using namespace std;

#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void factor(int n, int k, int divisor) {
    while (n > 1) {
        n /= 2;
        cout << 2 << " ";
        k--;
        if (k == 1) {
            cout << n;
            return;
        }
    }
}

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long nCr(long long n, long long r) {
    if (r > n - r) {
        r = n - r; 
    }

    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

void test() {
    string x;
    cin >> x;
    map<char, int>m;
    int l = x.size();
    for (int i = 0; i < l; i++) {
        m[x[i]]++;
    }
    int ones = 0;
    for (auto it : m) {
        if (it.second % 2 == 1) {
            ones++;
        }
    }
    if (ones > 0) {
        ones--;
    }
    if (ones % 2 == 0) {
        cout << "First";
    }
    else {
        cout << "Second";
    }
}
int main() {
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}