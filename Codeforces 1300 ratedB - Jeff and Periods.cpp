#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/
void test() {
    int n;
    cin >> n;
    vector<pair<int, int>>v(n);
    vector<int>freq(1e6+1);
    vector<int>f(1e6+1);
    map<int, pair<int, int>>m;
    map <int, int>ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
        freq[v[i].first]++;
    } 
    sort(v.begin(), v.end());
    for (int i = 0; i < n-1; i++)
    {
        if (v[i].first == v[i + 1].first)
        {
           int r = m[v[i].first].second = v[i + 1].second - v[i].second;
            if (m[v[i].first].second == m[v[i].first].first)
            {
                f[v[i].first]++;
            }
            m[v[i].first].first = m[v[i].first].second;
        }
        else
        {
            if (freq[v[i].first] == 1) {
                ans[v[i].first] = 0;
            }
            else
            {
                if (f[v[i].first] + 2 == freq[v[i].first])
                {
                    ans[v[i].first] = m[v[i].first].first;
                }
            }
        }
    }
    if (freq[v[n-1].first] == 1) {
        ans[v[n-1].first] = 0;
    }
    else
    {
        if (f[v[n-1].first] + 2 == freq[v[n-1].first])
        {
            ans[v[n-1].first] = m[v[n-1].first].first;
        }
    }
    cout << ans.size()<<"\n";
    for (auto it : ans)
    {
        cout << it.first << " "<<it.second<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); int t = 1; //cin >> t;
    while (t--) { test(); }
}
