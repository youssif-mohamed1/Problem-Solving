#include<bits/stdc++.h>
using namespace std;	                            /*~~~~~~~~~YJooe~~~~~~~~~*/
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
void test() {
    int n, m;
    cin >> n >> m;
    deque<long>a(n);
    vector<long>b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    a.push_front(0);
    for (int i = 0; i < m; i++)
    {
        int l = 0, r = n + 1, mid,ans=0;
        while (l < r - 1)
        {
            mid = (l + r) / 2;
            if (a[mid] <= b[i])
            {
                ans = mid;
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << ans << " ";
    }
}
int main() {
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}
