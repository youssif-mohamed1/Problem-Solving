#include<iostream>
#include<vector>
#include<iterator>
#include <algorithm>
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
#define rated cout<<"rated";
#define unrated cout<<"unrated";
#define maybe cout<<"maybe";
#define neg cout<<-1;
void test();
int main()
{
	test();
	ret;
}
void test()
{
	int n, t;
	cin >> n >> t;
	vector<int>arr(n, 0);
	if (t == 10)
	{
		if (n == 1)
		{
			neg;
		}
		else
		{
			arr[0] = t;
			arr.pop_back();
			copy(arr.begin(), arr.end(), ostream_iterator<int>(cout));
		}
	}
	else
	{
		arr[0] = t;
		copy(arr.begin(), arr.end(), ostream_iterator<int>(cout));
	}
}
