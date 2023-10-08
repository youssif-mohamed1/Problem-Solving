#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int s = 0, d = 0, y = n - 1, u = 1;
	for (int i = 0; u <= n;)
	{
		if (arr[i] >= arr[y])
		{
			if (u % 2 != 0)
			{
				s += arr[i];
			}
			else
			{
				d += arr[i];
			}
			i++;
		}
		else
		{
			if (u % 2 != 0)
			{
				s += arr[y];
			}
			else
			{
				d += arr[y];
			}
			y--;
		}
		u++;
	}
	cout << s << " " << d;
}
