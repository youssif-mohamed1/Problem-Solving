#include<iostream>
#include<string>
#include <cstring>
using namespace std;
int main()
{
	 string s;
	char temp,arr[100]={0},brr[100]={0},t2;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] < s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (int j = 0; j < s.size(); j++)
	{
		if (s[j]=='+')
		{
			arr[j] = '\0';
			break;
		}
		arr[j] = s[j];
	}
	int k = 0;
	for (int o = 0; o < strlen(arr); o++)
	{
		for (int j = 0; j < strlen(arr) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t2=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t2;
			}
		}
	}
	int f = 0;
	for (int j = 1; j < (strlen(arr)*2); j+=2)
	{
		brr[k] = arr[f];
		k += 2;
		f++;
		if (j != (strlen(arr) * 2)-1)
		{
			brr[j] = '+';
		}
	}
	for (int j = 0; j < strlen(brr); j++)
	{
		cout << brr[j];
	}
	return 0;
}