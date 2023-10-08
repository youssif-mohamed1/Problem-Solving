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
int binarysearch(vector<int>arr, int h, int key);
int main()                                /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	test();
	ret;
}
void test()
{
	int n, k, key = 0, pos = 0;
	cin >> n >> k;
	vector<int>arr(n, 5);
	for (int i = 2; i <= n; i++)
	{
		arr[i - 1] =(arr[i-1]* i)+arr[i-2];
	}
	key = (4 * 60) - k;
	pos = binarysearch(arr, n, key);
	if (key>=5)
	{
		cout << pos+1;
	}
	else
	{
		cout << 0;
	}
}
int binarysearch(vector<int>arr,int h, int key)
{
	int l = 0;
	int m = 0;
	h--;
	while (l <= h)
	{
		m = (l + h) / 2;
		if (arr[m] == key)
		{
			return m;
		}
		else if (arr[m] < key)
		{
			l = m + 1;
		}
		else
		{
			h = m - 1;
		}
	}
	if (arr[m] > key && m>0)
	{
		return m - 1;
	}
	else if (arr[m] < key && m >= 0)
	{
		return m;
	}
}