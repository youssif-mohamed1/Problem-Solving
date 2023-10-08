#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string x,y,z;
	cin >> x >> y;
	char arr[101];
	int u = 0;
	for (int i= x.size()-1; i>=0; i--)
	{
		arr[u] = x[i];
		u++;
	}
	arr[u] = '\0';
	 u = 0;
	for (int i = 0; i <y.size(); i++)
	{
		if (arr[i] == y[i])
		{
			u++;
		}
	}
	if ( u==strlen(arr))
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
	return 0;
}