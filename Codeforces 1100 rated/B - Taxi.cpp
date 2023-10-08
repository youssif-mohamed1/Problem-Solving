#include<iostream>
using namespace std;
int main() {
	int n = 0,sum=0,h=0,f=0;
	cin >> n;
	long* arr = new long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			f++;
		}
		else if (arr[i] == 3)
		{
			h++;
		}
		else if(arr[i] <= 2 || arr[i] == 4)
		{
			sum += arr[i];
		}
	}
	if (h<f)
	{
		f -= h;
		sum += f;
	}
	int mod=0;
	mod = sum % 4;
	if (mod== 0)
	{
		cout << h + sum / 4;
	}
	else
	{
		sum /= 4;
		cout << h + sum + 1;
	}
	delete[]arr;
	return 0;
}