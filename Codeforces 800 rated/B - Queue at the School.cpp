#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int n = 0, t = 0;
	string x;
	cin >> n >> t >> x;
	char c;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < x.size(); j++)
		{
			if (x[j] == 'B' && x[j + 1] == 'G')
			{
				c = x[j];
				x[j] = x[j + 1];
				x[j + 1] = c;
				j++;
			}
		}
	}
	cout << x;
	return 0;
}