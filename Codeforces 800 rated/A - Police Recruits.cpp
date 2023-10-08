#include <iostream>
using namespace std;
int main() {
	int n = 0,sum=0,c=0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
    }
	for (int i = 0; i < n; i++)
	{
		if (sum + arr[i] < 0)
		{
			c++;
		}
		else
		{
			sum += arr[i];
		}
	}
	cout << c;
	delete[]arr;
	return 0;
}

