#include <iostream>
using namespace std;
int main() {
    long n, m, a;
       long long x,y;
    cin >> n >> m >> a;
    x = n / a;
    y = m / a;
    if (n % a != 0)
    {
        x++;
    }
    if (m % a != 0)
    {
        y++;
    }
    cout << x*y;
    return 0;
}