#include <iostream>
using namespace std;
int main()
{
	int t,n,f=0,index=0,k=0,q=0;
	cin >> t;
	int *x = new int[t];
	for (int i = 0; i < t; i++)
	{
		k = 0;
		cin >> n;
		int* arr = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		for (int a = 0; a < n;)
		{
			q = 0;
			k = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[a] == arr[j] && a!=j)
				{
						goto there;
				}
				if (arr[a] != arr[j] && a!=j)
				{
					k++;
					if (k >= 2 && q==0)
					{
						index = a+1;
						goto here;
					}
				}
			}
		there:
			a++;
		}
		here:
		x[i] = index;
		delete[]arr;
	}
	for (int i = 0; i < t; i++)
	{
		cout << x[i] << "\n";
	}
	delete[]x;
	return 0;
}