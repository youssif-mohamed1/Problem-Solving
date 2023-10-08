#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string x;
	char xl[200];
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] >= 65 && x[i] <= 90)
		{
			x[i] = tolower(x[i]);
		}
	}
	int u = 0;
	int y = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[y] != 97 && x[y] != 101 && x[y] != 105 && x[y] != 111 && x[y] != 117 && x[y] != 121 && (u % 2 == 0 || u == 0))
		{
			xl[u] = '.';
			u++;
		}
		if (x[y] != 97 && x[y] != 101 && x[y] != 105 && x[y] != 111 && x[y] != 117 && x[y] != 121 && (u % 2 != 0 ))
		{
			xl[u] = x[y];
			u++;
		}
		y++;
	}

	xl[u] = '\0';
	for (int i = 0; i < strlen(xl); i++)
	{
		cout << xl[i];
    }
	return 0;
}