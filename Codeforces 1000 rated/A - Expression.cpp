#include<iostream>
int fmaximum(int* arr);
int fminimum(int* arr);
using namespace std;
int main() {
	int arr[3], c = 0, product = 1,sum=0;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		product *= arr[i];
		sum +=arr[i];
	}
	if (fmaximum(arr) == 1)
	{
		if (fminimum(arr) == 0)
		{
			c = (arr[fminimum(arr)] + arr[fmaximum(arr)]) * arr[2];
		}
		else if (fminimum(arr) == 2)
		{
			c = (arr[fminimum(arr)] + arr[fmaximum(arr)]) * arr[0];
		}
		if (c >= product && c >= sum)
		{
			cout << c;
		}
		else if(product>=c && product >= sum)
		{
			cout << product;
		}
		else if (sum >= c && sum>=product )
		{
			cout << sum;
		}
	}
	if (fmaximum(arr) == 2 || fmaximum(arr) == 0)
	{
		if (fmaximum(arr) == 0)
		{
			c = (arr[1] + arr[2]) * arr[0];
		}
		else if (fmaximum(arr) == 2)
		{
			c = (arr[0] + arr[1]) * arr[2];
		}
		if (c >= product && c >= sum)
		{
			cout << c;
		}
		else if (product >= c && product >= sum)
		{
			cout << product;
		}
		else if (sum >= c && sum >= product)
		{
			cout << sum;
		}
	}
	return 0;
}
int fmaximum(int* arr)
{
	int max = 0,index;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}
int fminimum(int* arr)
{
	int min = 100000000,index=0;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}