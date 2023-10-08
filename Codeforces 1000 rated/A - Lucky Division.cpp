#include<iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string n;
	cin >> n;
	int j = 0;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] != '4' && n[i] != '7')
		{
			j++;
		}
	}
	if (j == 0)
	{
		cout << "YES";
	}
	else
	{	int h = 0,a=0,m,g=0;
	m = stoi(n);
	for (int i = 4; i <= 777 && g == 0; )
	{
		switch (h) {
		case 1:i += 3; break;
		case 2:
			if (a > 0)
			{
				i += 30;
			}
			else if (a == 0)
			{
				i += 40;
			}
			break;
		case 3:i = 444; h = 0; a++;
			if (a == 2)
			{
				i == 777;
			}
			break;
		}
		if (m % i == 0)
		{
			g++;
		}
		h++;
		if (a == 2)
		{
			break;
		}
	}
	if (g > 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	}
	return 0;
}
