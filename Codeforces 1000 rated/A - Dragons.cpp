#include <iostream>
using namespace std;
int** sort(int** arr, int n);
#define yes cout<<"YES";
#define no cout << "NO";
int main()
{
	int s = 0,n=0,**p;
	cin >> s>>n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[2];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	int c = 0,k=0;
	p = sort(arr,n);
	for (int i = 0; i < n; i++)
	{
		if (s > p[i][0])
		{
			s += p[i][1];
			c++;
		}
	}
	if (c == n)
	{
		yes;
	}
	else
	{
		no;
	}
	return 0;
}
int** sort(int** arr,int n)
{
	int temp;
	int temp2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j][0] > arr[j + 1][0])
			{
				temp = arr[j][0];
				temp2 = arr[j][1];
				arr[j][0] = arr[j + 1][0];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][0] = temp;
				arr[j + 1][1] = temp2;
			}
		}
	}
	return arr;
}