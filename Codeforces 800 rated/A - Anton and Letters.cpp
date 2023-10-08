#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<time.h>
#include<math.h>
#include<set>
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
int main()                                /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	test();
	ret;
}
void test()
{
	set<char>s;
	auto it = s.begin();
	string x;
	getline(cin, x);
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			s.insert(x[i]);
		}
	}
	cout << s.size();
}