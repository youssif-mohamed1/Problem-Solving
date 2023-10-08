#include <iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
    }
	int temp;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	int sum=0;
	for (int i = 1; i < t; i++)
	{
		sum += (arr[0] - arr[i]);
	}
	cout << sum;
	delete[]arr;
	return 0;
}

