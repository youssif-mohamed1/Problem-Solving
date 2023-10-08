#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string x;
	char xl[200],xc;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		for (int j = 0; j < x.size() - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				xc = x[j];
				x[j] = x[j + 1];
				x[j + 1] = xc;
			}
		}
    }
	int u = 0;
	int y = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != x[i + 1])
		{
			xl[u] = x[y];
			u++;
		}
		y++;
	}
	xl[u] = '\0';

	if (strlen(xl) % 2 != 0)
	{
		cout << "IGNORE HIM!";
	}
	else if (strlen(xl) % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	return 0;
}