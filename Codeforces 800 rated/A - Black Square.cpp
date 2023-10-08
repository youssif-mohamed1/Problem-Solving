#include <iostream>
#define endl cout<<endl;
#define ret return 0;
using namespace std;
int main()
{
	int arr[4],c=0;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '1')
		{
			c += arr[0];
		}
		else if (x[i] == '2')
		{
			c += arr[1];
		}
		else if (x[i] == '3')
		{
			c += arr[2];
		}
		else if (x[i] == '4')
		{
			c += arr[3];
		}
	}
	cout << c;
	ret;
}