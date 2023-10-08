#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string sortz(string z);
int main() {
	string x, y, z,b;
	int c=0;
	cin >> x >> y >> z;
	b = x + y;
	if ( b.size() == z.size())
	{
		z = sortz(z);
		b = sortz(b);
		if (z==b)
		{
			cout << "YES";
		}
		else
		{
			goto here;
		}
	}
	else
	{
		here:
		cout << "NO";
	}
	return 0;
}
string sortz(string a){
	string z = a;
	char temp;
	for (int i = 0; i < z.size(); i++)
	{
		for (int j = 0; j < z.size(); j++)
		{
			if (z[j] > z[j + 1])
			{
				temp = z[j];
				z[j] = z[j + 1];
				z[j + 1] = temp;
			}
		}
	}
	return z;
}
