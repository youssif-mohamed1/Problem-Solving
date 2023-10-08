#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int a = 0, d = 0; long long n, i=0;
	string x; 
	cin >> n;
	cin >> x;
	for ( i = 0; i < n; i++)
	{
		if (x[i] == 'A')
		{
			a++;
		}
		if (x[i] == 'D')
		{
			d++;
		}
	}
	if (a > d)
	{
		cout << "Anton";
	}
	else if (a < d)
	{
		cout << "Danik";
	}
	else 
	{
		cout << "Friendship";
	}
	return 0;
}
//47, 744, 4