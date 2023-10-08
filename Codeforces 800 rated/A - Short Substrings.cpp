#include <iostream>
#include<string>
#include <cstring>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	string* x = new string[t];
	string y, z;
	for (int i = 0; i < t; i++)
	{
		cin >> x[i];
	}
	int j = 0,u=0;
	for (int h = 0; h < t; h++)
	{
		u = 0; j = 0;
		for (int i = 0; i < x[h].size() / 2; i++)
		{
			y = x[h].substr(j, 2);
			j += 2;
			if (j > 2)
			{
				u++;
				if (z[u] == y[0])
				{
					y = y.substr(1, 1);
				}
			}
			if (u == 0)
			{
				z = y;
			}
			else
			{
				z += y;
			}
		}
		cout << z<<"\n";
	}
	delete[]x;
	return 0;
}
