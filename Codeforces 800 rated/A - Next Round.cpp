#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= arr[k-1] && arr[i] > 0)
		{
			y++;
		}
	}
	cout << y;
	delete[] arr;
	return 0;
}