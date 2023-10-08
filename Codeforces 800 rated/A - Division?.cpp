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
int div(int n);
int main()
{
	test();
	ret;
}
void test()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		string x = "Division ";
		cout << x + to_string(div(n));
		el;
	}
}
int div(int n)
{
	if (n >= 1900)
	{
		return 1;
	}
	else if (n >= 1600 && n < 1900)
	{
		return 2;
	}
	else if (n >= 1400 && n < 1600)
	{
		return 3;
	}
	else if (n < 1400)
	{
		return 4;
	}
}

