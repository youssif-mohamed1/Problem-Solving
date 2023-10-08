#include <iostream>
using namespace std;
int main()
{
	int arr[5][5], x = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
		cout << "\n";
	}
	if (arr[2][2] == 1)
	{
		x=0;
	}
	if (arr[2][2] != 1)
	{
		for (int a = 0; a < 5; a++)
		{
			for (int s = 0; s < 5; s++)
			{
				if (arr[a][s] == 1)
				{
					if (a == 0 || a == 4)
					{
						x+=2;
					}
					if (a == 1 || a == 3)
					{
						x++;
					}
					if (s == 0 || s == 4)
					{
						x+=2;
					}
					if (s == 1 || s == 3)
					{
						x++;
					}
				}
			}
		}
	}
	cout << x;
	return 0;
}