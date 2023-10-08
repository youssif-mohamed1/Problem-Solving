#include <iostream>
using namespace std;
int howmany(int n, int m);
int reminder(int n, int m);
int count(int n);
int main()
{
	int n, m,dif=0,rem=0,c=0;
	cin >> n >> m;
	dif = howmany(n, m);
	rem = reminder(n, m);
	c = count(rem);
	cout << dif << "\n" << c;
	return 0;
}
int howmany(int n, int m)
{
	if (n >= m)
	{
		return m;
	}
	else
	{
		return n;
	}
}
int reminder(int n, int m)
{
	int dif;
	dif = n - m;
	if (dif < 0)
	{
		dif *= (-1);
	}
	return dif;
}
int count(int n)
{
	return n / 2;
}

