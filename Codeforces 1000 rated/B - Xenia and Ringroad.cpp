#include <iostream>
using namespace std;
int main()
{
	long long n ,m;
	cin >> n>>m;
	long long* arr = new long long[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}
	long long c = 0;
	c = arr[0]-1;
	for(long long i=0;i<m-1;i++)
	{ 
		if (arr[i + 1] < arr[i])
		{
			c += n - arr[i]+1;
			c += (arr[i + 1]-1);
		}
		else
		{
			c += (arr[i + 1] - arr[i]);
		}
	}
	cout << c;
	delete[]arr;
	return 0;
}

