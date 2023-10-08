#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<time.h>
#include<math.h>
using namespace std;
#define ret  return 0;
#define el cout<<endl;
#define el2 cout<<endl<<endl;
#define el3 cout<<endl<<endl<<endl;
#define sp cout<<" ";
#define neg cout<<-1;
#define yes cout<<"YES";
#define no cout<<"NO";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
void test();
int main()
{
	test();
	ret;
}
void test()
{
	int t,c=1,w=0;
	cin >> t;
	string x,y,z;
	for (int i = 0; i < t; i++)
	{
		cin >> x;
		if (i == 0) { y = x; }
		else if (x == y)
		{
			c++;
		}
		else
		{
			z = x;
			w++;
		}
	}
	if (max(c, w) == c)
	{
		cout << y;
	}
	else
	{
		cout << z;
	}

}


