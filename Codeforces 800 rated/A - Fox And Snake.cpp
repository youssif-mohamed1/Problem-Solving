#include <iostream>
using namespace std;
#define snake cout<<"#";
#define dot cout<<".";
#define endl cout<<endl;
int m = 0;
void print();
void toleft();
void toright();
void seq(int n);
int main()
{
	int n;
	cin >> n >> m;
	seq(n);
}
void seq(int n)
{
	int c=0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			print();
			endl;
		}
		else
		{
			if (c == 0)
			{
				toleft();
				endl;
				c++;
			}
			else
			{
				toright();
				endl;
				c = 0;
			}
		}
	}
}
void print()
{
	for (int i = 0; i < m; i++)
	{
		snake;
	}
}
void toleft()
{
	for (int i = 0; i < m; i++)
	{
		if (i < m - 1)
		{
			dot
		}
		else
		{
			snake;
		}
	}
}
void toright()
{
	for (int i = 0; i < m; i++)
	{
		if (i==0)
		{
			snake
		}
		else
		{
			dot;
		}
	}
}