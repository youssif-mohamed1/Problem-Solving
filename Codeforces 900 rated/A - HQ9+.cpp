#include<iostream>
using namespace std;
int main() {
	int j = 0;
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if ((x[i] == 'H' || x[i] == 'Q' || x[i] == '9') || ((x[i] == 'H' || x[i] == 'Q' || x[i] == '9') && x[i] == '+'))
		{
			j++;
		}
	}
	if (j > 0)
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}