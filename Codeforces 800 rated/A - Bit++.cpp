#include <iostream>
using namespace std;
int main()
{
	int n,b=0;
	cin >> n;
	string *arr=new string [n];
	for (int j = 0; j < n;j++)
	{
		cin >> arr[j];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == "++X")
		{
			++b;
		}
		if (arr[i] == "--X")
		{
			--b ;
		}
		if (arr[i] == "X++")
		{
			b++;
		}
		if (arr[i] == "X--")
		{
			b--;
		}
	}
	cout << b << "\n";
	return 0;
}