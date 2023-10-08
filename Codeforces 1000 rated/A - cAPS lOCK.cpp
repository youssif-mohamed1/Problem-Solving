#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string x;
	cin >> x;
	int i = 1,c=0,j=0;
	while (isupper(x[i]) && j < x.size() - 1)
	{

		c++;
		j++;
		i++;
	}
	if (c == x.size() - 1)
	{
		for (int i = 0; i < x.size(); i++)
		{
			if (islower(x[i]))
			{
				x[i] = toupper(x[i]);
			}
			else if (isupper(x[i]))
			{
				x[i] = tolower(x[i]);
			}
		}
	}
	cout << x;
	return 0;
}