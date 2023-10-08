#include <iostream>
using namespace std;
int main()
{
	int n, m,x,y,k;
	cin >> m >> n;
	if ((n % 2 == 0 && m%2!=0) || (n % 2 == 0 && m % 2 == 0))
	{
		x = n / 2;
		cout << x * m;
	}
	else if (m % 2 == 0 && n%2!=0)
	{
		x = m / 2;
		cout << x * n;
	}
	else if (m % 2 != 0 && n % 2 != 0)
	{
		x = n / 2;
		y = m / 2;
		cout << m * (x )+y;
	}
	return 0;
}