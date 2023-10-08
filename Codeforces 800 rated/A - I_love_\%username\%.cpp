#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int c = 0,v=0,sum=0;
	for (int i = 1; i < n; i++)
	{
		c = 0;
		v = 0;
		for (int j = i-1; j >= 0; j--)
		{
			if (arr[i] > arr[j] )
			{
				c++;
			}
			else if (arr[i] < arr[j])
			{
				v++;
			}
		}
		if (c == i || v == i)
		{
			sum++;
		}
	}
	cout << sum;
	delete[]arr;
	return 0;
}

