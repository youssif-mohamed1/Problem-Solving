#include <iostream>
using namespace std;
string sort(string y);
int main()
{
	int n = 0,k=0,u=0,c=0,j=0;
	cin >> n;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] == '0' && arr[i][1] == '1')
		{
			if (k > 0)
			{
				c++;
				k = 0;
			}
			u++;
		}
		if (arr[i][0] == '1' && arr[i][1] == '0')
		{
			if (u > 0)
			{
				c++;
				u = 0;
			}
			k++;
		}
	}
	cout << c+1;
	delete[]arr;
	return 0;
}