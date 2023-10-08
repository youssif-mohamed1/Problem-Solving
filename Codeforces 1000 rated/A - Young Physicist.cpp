#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int* arr = new int[n * 3];
	int mat[3];
		for (int a = 0; a < n*3; a++)
		{
			cin >> arr[a];
		}
	int u = 0;
	int sum = 0,count=0;
	if (n==1 && arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
	{
		mat[0] == 0;
		mat[1] == 0;
		mat[2] == 0;
		cout << "YES";
		return 0;
	}
	else {
		for (int i = 0; i < n * 3; i += 3)
		{

			if ((i == 0 && sum == 0) || count == (n - 1))
			{
				count = 0;
				sum = 0;
				if (u == 0)
				{
					i = 0;
					sum += arr[i];
				}
				else if (u == 1)
				{
					i = 1;
					sum += arr[i];
				}
				else if (u == 2)
				{
					i = 2;
					sum += arr[i];
				}
			}
			else {
				sum += arr[i];
				count++;
			}
			if (count == (n - 1) && i != 0)
			{
				mat[u] = sum;
				u++;
				i = 0;
			}
			if (u == 3)
			{
				break;
			}
		}
		if (mat[0] == 0 && mat[1] == 0 && mat[2] == 0)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		delete[]arr;
		return 0;
	}
}
