#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	string x;
	cin >> x;
	if (n < 24)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			x[i] = tolower(x[i]);
			if (x[i] >= 97 && x[i] <= 122)
			{
				arr[i] = int(x[i]);
			}
		}
		int c = 0;
		for (int i = 97; i <= 122;)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == arr[j])
				{
					c++;
					goto here;
				}
			}
		here:
			i++;
		}
		if (c==26)
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