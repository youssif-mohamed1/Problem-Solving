#include <iostream>
using namespace std;
int main() {

	int n = 0, h = 0,c=0;
	cin >> n >> h;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(a + i);
	}
	for (int j = 0; j < n; j++)
	{
		c++;
		if (*(a+j) > h)
		{
			c++;
		}
	}
	cout << c;
	delete[]a;
		return 0;
}