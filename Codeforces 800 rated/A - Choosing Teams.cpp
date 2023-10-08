#include <iostream>
#include<string>
#include <cstring>
using namespace std;
int main()
{
	int n, k,c=0,u=0;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (5 - arr[i] >= k)
		{
			c++;
		}
		if (c == 3)
		{
			u++;
			c = 0;
		}
	}
	cout << u;
	return 0;
}
