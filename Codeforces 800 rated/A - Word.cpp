#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string x;
	//char arr[101] = { 0 }, brr[101] = { 0 };
	cin >> x;
	int u=0,b=0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] >= 65 && x[i] <= 90)
		{
			u++;
		}
		if (x[i] >= 97 && x[i] <= 122)
		{
			b++;
		}
	}
	if (b >=u)
	{
		for (int i = 0; i < x.size(); i++)
		{
			x[i] = tolower(x[i]);
		}
	}
	else if (b < u)
	{
		for (int i = 0; i < x.size(); i++)
		{
			x[i] = toupper(x[i]);
		}
	}
	cout << x;
		return 0;
	
}
