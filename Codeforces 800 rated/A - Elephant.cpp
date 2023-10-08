#include <iostream>
using namespace std;
int main() {
	long long x;
	cin >> x;
	int y = 0;
	for (int a = 5; a >= 1; a--)
	{
		while (x >= a)
		{
			x -= a;
			y++;
		}
		if (x == 0)
		{
			break;
		}
	}
	cout << y;
		return 0;
}