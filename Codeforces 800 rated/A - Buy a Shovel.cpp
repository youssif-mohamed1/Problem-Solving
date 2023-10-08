#include<iostream>
using namespace std;
int main()
{
	int k,r;
	cin >> k >> r;
	int j = 0;
	for (int i = 1; i > -1; i++)
	{
		j = k * i;
		if (j % 10==r ||j % 10==0)
		{
			cout << i;
			break;
		}
	}
	return 0;
}

