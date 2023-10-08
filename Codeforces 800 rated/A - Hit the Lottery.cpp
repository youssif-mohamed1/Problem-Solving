#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int arr[5] = { 100,20,10,5,1 },u=0,k=0;
	for (long i = 0; n>0; i++)
	{
		if (n >= arr[u])
		{
			n -= arr[u];
			k++;
		}
		else
		{
			u++;
		}
	}
	cout << k;
	return 0;
}

