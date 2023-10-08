#include <iostream>
using namespace std;
int main() {

	int u = 0;
	string x;
	cin >> x;
	int y = 0,k=0,l=0;
	if ((x[0] == '7' || x[0] == '4') && x.size()==1)
	{
		cout << "NO";
	}
	else {
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '4')
			{
				u++;
				k++;
			}
			
			else if (x[i] == '7')
			{
				u++;
				l++;
			} 
		}
		for (int i = 0; i < x.size(); i++)
		{
			if ((x[i] == '4' || x[i] == '7') || (u == 4 || u == 7))
			{
				y++;
			}
		}
		if ((y / x.size() == 1 &&((k != 0 && l != 0) || (u==4 || u==7))) && (u == 4 || u == 7))
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
