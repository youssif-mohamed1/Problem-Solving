#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int x,c=0;
	cin >> x;
	string y;
	for (int i =x+1 ; i >0; i++)
	{
		c = 0;
		y = to_string(i);
		for (int j = 0; j < y.size(); j++)
		{
			for (int h = 0; h < y.size(); h++)
			{
				if (y[j] == y[h] && h!=j)
				{
					c++;
				}
			}
		}
		if (c == 0)
		{
			break;
		}
	}
	cout << y;
	return 0;
}