#include <iostream>
using namespace std;
#define ll long long
int main()
{
	ll n,k,j=0,c=0,hj=0;
	cin >> n;
	//ll* arr = new ll[n];
	for (ll i = 0; i < n; i++)
	{
		//cin >> arr[i];
		cin >> k;
		if (j <= k)
		{
			c++;
			//j = k;
		}
		else
		{
			c = 1;
		//	j = 0;
		}
		if (hj < c)
		{
			hj = c;
		}
		j = k;
	}
	cout << hj;
	/*ll c = 0,h=0;
	for (ll i = 0; i < n; i++)
	{
		c = 0;
		for (ll j = i; j < n-1; j++)
		{
			if (arr[j] <= arr[j + 1])
			{
				c++;
			}
			else
			{
				goto here;
			}
		}
		here:
		c++;
		if (h < c)
		{
			h = c;
		}
	}
	cout << h;
	delete[]arr;*/
	return 0;
}

