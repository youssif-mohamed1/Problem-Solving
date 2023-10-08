#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<map>
using namespace std;

#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

void test() {
    long long n;
    cin >> n;
    vector<long long>v(n);
    map<int, int>m;
    for (int i = 1; i <= n; i++)m[i] = 0;
    for (int i = 0; i < n; i++) {
        m[v[i]]++;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }
    int ans=0;
    for (int i = n; i > 0; i--) {
        int c = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                    c += m[j];

                else 
                    c += m[j] + m[i / j];
            }
        }
        ans = max(ans, c);
    }
    cout << ans;
}
int main() {
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    YJooe int t = 1; cin >> t;
    while (t--) { test(); cout << "\n"; }
}