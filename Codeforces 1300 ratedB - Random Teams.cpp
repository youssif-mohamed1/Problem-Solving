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
    long long n, m,maxi,mini,a1,mod,ans1,ans2;
    cin >> n >> m;
    maxi = (n - m + 1) * (n - m) / 2; // (n+1)(n)/2   6 3  1 1 4  (6 - 2) 3         2  (m-1)
    a1 = n / m;
    mod = n % m;
    ans1 = (a1 * (a1 - 1)) / 2;
    ans2 = ((a1 + 1) * (a1)) / 2;
    mini = (ans1 * (m - mod)) + (ans2 * (mod));
    cout << mini << " " << maxi;
}
int main() {
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n\n\n"; }
}