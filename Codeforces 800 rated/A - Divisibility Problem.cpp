#include<iostream>
using namespace std;
int main() {
	int t = 0;
	cin >> t;
	long long** arr = new  long long*[t];
	for (int i = 0; i < t; i++)
	{
		arr[i] = new long long[2];
	}
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	int h = 0;
	for (int i = 0; i < t; i++)
	{   
		if (arr[i][0] % arr[i][1]==0)
		{
			h = 0;
		}
		else if (arr[i][0] > arr[i][1])
		{
			h = arr[i][0] / arr[i][1];
			h =(h* arr[i][1])+arr[i][1];
			h -= arr[i][0];
		}
		else if(arr[i][0] < arr[i][1])
		{
			h = arr[i][1] - arr[i][0];
		}
	
		cout << h<<"\n";
	}
	delete[]arr;
	return 0;
}