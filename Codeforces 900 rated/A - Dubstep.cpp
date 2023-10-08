#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string x,y;
	cin >> x;
	int j = 0,n=0;
	int z = 0,h=0;
	if (x.find("WUB") == -1)
	{
		y = x;
	}
	for (int i = 0;x.find("WUB", n)!=-1;)
	{
		j = x.find("WUB",n);
		z = y.size();
		n = j + 3;
		if (j != 0 && i==0)
		{
			y += x.substr(0, j);
			n = y.size();
			goto here;
		}
		y += x.substr(n, x.find("WUB", n)-n);
		if (y.size() == z + 1)
		{
			h++;
		}
		if (y.size() > z || h>1)
		{
			h = 0;
		here:
			y += " ";
		}
		i++;
	}
	cout << y;
	return 0;
}