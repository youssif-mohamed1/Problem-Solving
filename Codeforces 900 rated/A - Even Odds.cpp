#include <iostream>
using namespace std;
int main()
{
	int64_t n, k,ans,u;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		u = n / 2;
	}
	else if (n % 2 != 0)
	{
		u = (n + 1) / 2;
	}
	if (n % 2 == 0 && k>u)
	{
		cout << (2 + (k - 1) * (2)) - n;
		return 0;
	}
	else if (n % 2 != 0 && k > u)
	{
		 ans=(1 + (k - 1) * (2)) - n;
		 cout << ans;
		 return 0;
	}
	else if (k <=u )
	{
		 ans=(1 + (k - 1) * (2));
		 cout << ans;
		 return 0;
	}
}