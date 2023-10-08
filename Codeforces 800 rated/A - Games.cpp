#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[2];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][0] == arr[j][1] && i!=j)
			{
				c++;
			}
		}
	}
	cout << c;
	return 0;
}

