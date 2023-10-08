#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
#include<string>
#include<cstring>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;	                                                      /*~~~~~~~~~YJooe~~~~~~~~~*/
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
bool valid(int m, vector<long>v, int n, long t){
    int l = 1, r = m;
    while (r <= n){
        if (v[r] - v[l - 1] <= t){
            return true;
        }
        r++; l++;
    }
    return false;
}
void test() {
    int n, l = 0, r, mid, ans = 0; long t;
    cin >> n >> t;
    vector<int>v(n+1);
    vector<long>sum(n + 1);
    for (int i = 1; i <= n; i++)cin >> v[i], sum[i] = (sum[i - 1] + v[i]);;
    r = n + 1;
    while (l < r - 1){
        mid = (l + r) / 2;
        if (valid(mid,sum,n,t)){
            ans = mid;
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << ans;
}
int main() {
      //freopen("input.txt", "r", stdin);
     // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}
