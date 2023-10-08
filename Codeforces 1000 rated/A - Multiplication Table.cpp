#include<bits/stdc++.h>
using namespace std;	                           /*~~~~~~~~~YJooe~~~~~~~~~*/
#define YJooe ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int noOfDivisorsLessThanN(long n, long m) {
    long sqrtM = sqrt(m);
    int count = 0;
    for (int i = 1; i * i <= m; i++)
    {
        if (m - i * (m / i) == 0 && i <= n) {
            if (m / i <= n) {
                count += 2;
            }
        }
    }
    if (sqrtM * sqrtM == m && count>0)
        count--;
    return count;
}

void test() {
    long n, m;
    cin >> n >> m;
    cout << noOfDivisorsLessThanN(n, m);
}
int main() {
      //freopen("input.txt", "r", stdin);
     // freopen("output.txt", "w", stdout);
    YJooe int t = 1; //cin >> t;
    while (t--) { test(); cout << "\n"; }
}
