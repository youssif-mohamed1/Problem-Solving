#include <iostream>
#define endl cout<<endl;
#define m cout<<"Mishka";
#define c cout<<"Chris";
#define d cout<<"Friendship is magic!^^";
using namespace std;
int main()
{
	int n;
	cin >> n;
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
	int v = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] > arr[i][1])
		{
			v++;
	    }
		else if (arr[i][0] < arr[i][1])
		{
			b++;
		}
	}
	if (v > b)
	{
		m;
	}
	else if (v < b)
	{
		c;
	}
	else
	{
		d;
	}
	return 0;
}