#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int sum = 0, max = 0;
	int* arr = new int[n*2];
	for (int j = 0; j < n * 2; j++)
	{
		cin >> arr[j];
	}
	int i = 0, u = 1,y=0;
	for (int k = 0; k < n * 2; k += 2)
	{
		sum -= arr[i];
		sum += arr[u];
		if (sum > max)
		{
			max = sum;
		}
		if (y<=max)
		{
			y = max;
		}
		i += 2;
		u += 2;
		max = sum;
	}
	cout << y;
	return 0;
}