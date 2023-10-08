#include<iostream>
using namespace std;
#define ll long long;
int main()
{
	long long n, b, d,sum=0,k=0,l=0;
	cin >> n >> b >> d;
	//long long* arr = new long long[n];
	for (long long i = 0; i < n; i++)
	{
		cin >> k;
		if (k <= b)
		{
			sum += k;
			if (sum > d)
			{
				l++;
				sum = 0;
			}
		}
	}
	cout << l;
	return 0;
}

