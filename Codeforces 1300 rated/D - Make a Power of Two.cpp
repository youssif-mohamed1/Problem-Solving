#include<iostream>	
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<math.h>
#include<cmath>

using namespace std;						/*~~~~~~~~~~YJooe~~~~~~~~~~*/

#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

bool isPowerOfTwo(int n)
{
    return false ? n == 0 : floor(log2(n)) == ceil(log2(n));
}


void test()
{
    long long n;
    long long ans = 1e18;
    cin >> n;
    if (isPowerOfTwo(n)) {
        cout << 0<<"\n";
    }
    else {
        string s = to_string(n);
        for (int i = 0; i <= 60; i++)
        {
            long long nn = static_cast<long long>(pow(2, i));
            string sn = to_string(nn);
            long long c = 0, j = 0, k = 0;
            bool bb;
            while (j != s.length() && k != sn.length())
            {
                if (s[j] == sn[k])
                {
                    j++;
                    k++;
                    bb = true;
                }
                else
                {
                    j++;
                    c++;
                    bb = false;
                }
            }
            if (bb = true)
            {
                if (j == s.length())
                {
                    k--;
                    c += sn.length() - k - 1;
                }
                else if (k == sn.length())
                {
                    j--;
                    c += s.length() - j - 1;
                }
            }
            else
            {
                k--;
                c += sn.length() - k - 1;
            }
            if (c == 1)
            {
                ans = 1; break;
            }
            else {
                ans = min(ans, c);
            }
        }
        cout << ans << "\n";
    }

}


int main()
{
    YJooe
        int t = 1;
    cin >> t;
    while (t--) { test(); }
}

