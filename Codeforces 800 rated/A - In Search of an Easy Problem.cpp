#include <iostream>
using namespace std;
int main() {

	int n,c=0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			c++;
    	}
		else if (arr[i] == 1)
		{
			c--;
		}
	}
	if (c / n == 1)
	{
		cout << "EASY";
	}
	else if (c / n != 1)
	{
		cout << "HARD";
	}
	return 0;
}