#include<iostream>
#include<vector>
#include<math.h>
#include<cmath>
///#include<bits/stdc++.h>
using namespace std;

#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
void test() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a < b)
    {
        int c = n * a;
        cout << c << endl;
    } 
    else {
        int ans = n / m;
        int x = ans;
        ans *= b;
        if ((n - m * x) * a <= b)
        {
            ans += (n - m * x) * a;
        }
        else {
            ans += b;
        }
        cout << ans << endl;
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}

