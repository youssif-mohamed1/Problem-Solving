#include <iostream>
#include <string>
#include <cstring>
#define endl cout<<endl;
#define yes cout<<"YES";
#define no cout<<"NO";
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x = 0,sum = 0;;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			
			if (j < 3)
			{
				x += (int(arr[i][j]) - '0');
			}
			else
			{
				x -= (int(arr[i][j]) - '0');
			}
		}
		if (x == 0)
		{
			yes;
			endl;
		}
		else
		{
			no;
			endl;
			x = 0;
		}
	}
	delete[]arr;
	return 0;
}
