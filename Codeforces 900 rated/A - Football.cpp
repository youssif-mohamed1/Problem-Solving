#include <iostream>
using namespace std;
int main() {
	string x;
	cin >> x;
	int y = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == x[i + 1])
		{
			y++;
		}
		else if (x[i] != x[i + 1])
		{
			y=0;
		}
		if (y == 6)
		{
			break;
		}
	}
	if (y == 6)
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
		return 0;
	
}
