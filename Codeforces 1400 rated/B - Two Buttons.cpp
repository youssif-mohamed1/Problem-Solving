#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<set>
#include<string>
#include<cstring>
#include<climits>
#include<deque>
//#include<bits/stdc++.h>
using namespace std;	                                                      /*~~~~~~~~~YJooe~~~~~~~~~*/
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
void test() {
    int n, m,count=0;
    cin >> n >> m;
    if (n >= m)
    {
        cout << n - m;
    }
    else if (n < m)
    {
        while (m > n)
        {
            if (!(m&1)) {
                m /= 2;
            }
            else {
                m++;
            }
            count++;
        }
        if (m < n) {
            count += (n - m);
        }
        cout << count;
    }

}
int main() {
      //freopen("input.txt", "r", stdin);
     // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}
