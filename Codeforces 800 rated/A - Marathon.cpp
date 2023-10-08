#include <iostream>
#define endl cout<<endl;
using namespace std;
int main()
{
	int n;
	cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[4];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
	int c = 0;
	
	for (int i = 0; i < n; i++)
	{
		c = 0;
		for (int j = 1; j < 4; j++)
		{
			if (arr[i][0] < arr[i][j])
			{
				c++;
			}
		}
		cout << c;
		endl;
	}
}