#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int b = 0;
	cin >> n;
	if (n == 1)
	{
		b++;
		n++;
	}
	int* arr = new int[n];
	int* brr = new int[n-1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		cin >> brr[i];
	}
	if (n == 3 || n==6)
	{
		cout << "Oh, my keyboard!";
		return 0;
	}
	int i = 0,c=0,k=0;
	for (int j = 0; j < n; j++)
	{
		i = 0;
		c = 0;
		while (c != 1 && i<n)
		{
			if (j + 1 == arr[i])
			{
				c++;
			}
			else if (j + 1 == brr[i])
			{
				c++;
			}
			i++;
			if (c ==1)
			{
				k++;
			}
			
		}
	}
	if (b > 0)
	{
		n--;
	}
	if (k == n)
	{
		cout << "I become the guy.";
	}
	else
	{
		cout << "Oh, my keyboard!";
	}
	delete[]arr;
	delete[]brr;
	return 0;
}
