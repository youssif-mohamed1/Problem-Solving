#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;	/*~~~~~~~~~YJooe~~~~~~~~~*/

void test() {
    int n, l = 1, r = 1;
    long long ans = 1;
    cin >> n;
    vector<int>v(n);
    vector<int>index;
    for (int i = 0; i < n; i++)cin >> v[i];
    int ones = 0, zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)index.push_back(i + 1),ones++;
    }
    int u = index.size();
    for (int i = 0; i < u - 1; i++)
    {
        ans *= (index[i + 1] - index[i]);
    }
    if (u > 1)
        cout << ans;
    else if(u==1){
        if(ones)cout << 1;
    }
    else
    {
        cout << 0;
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); int t = 1; //cin >> t;
    while (t--) { test(); }
}
