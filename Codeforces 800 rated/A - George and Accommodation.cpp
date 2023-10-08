#include <iostream>
using namespace std;
int main() {

	int n, c = 0;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][j + 1] - arr[i][j] >= 2)
		{
			c++;
		}
	}
	cout << c;
	return 0;
}