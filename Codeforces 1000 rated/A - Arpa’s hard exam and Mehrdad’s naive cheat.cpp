#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>
#include<cstring>
#include<time.h>
#include<math.h>
#include<list>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<deque>
#include<cmath>
using namespace std;
#define ret  return 0;
#define el cout<<endl;
#define el2 cout<<endl<<endl;
#define el3 cout<<endl<<endl<<endl;
#define sp cout<<" ";
#define neg cout<<-1;
#define yes cout<<"YES";
#define no cout<<"NO";
#define ok cout<<"OK";
#define ll long long
#define ull unsigned long long
#define i64 int64_t
#define ld long double
#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
void test();
ll mod(string n);
int print(int k);
int main()                                     /*~~~~~~~~~~YJooe~~~~~~~~~~*/
{
	YJooe
	test();
	ret;
}
void test()
{
	 i64 n;
	cin >> n;
	if (n != 0)
	{
		cout << print(mod(to_string(3 * n)));
	}
	else if(n==0)
	{
		cout << 1;
	}

}
ll mod(string n)
{
	ull c = 0;
	ull x = n.size();
	for (ull i = 0; i < x; i++)
	{
		c = (c * 10 + int(n[i]) - '0') % 4;
	}
	return c;
}
int print(int k)
{
	if (k == 1) { return 2; }
	else if (k == 2) { return 4; }
	else if (k == 3) { return 8; }
	else { return 6; }
}

//bool gethow(long long n)
//{
//	//bool k = true;
//	ll c = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (n % i)
//		{
//			c++;
//		}
//	}
//	return c % 2 == 1 ? false : true;
//}
////////////////inclusion Execlusion
	/*
	calculate how mant numbers are divisible by 2,3,5,7 from 1 to 100;
	*/
	// count 2,3,5,7 are 4 numbers ,therfore 2^4-1 are number of subsets
	// therfore we need to make four nested loops
//int count = 0;
//for (int i = 0; i <= 1; i++)
//{
//	for (int j = 0; j <= 1; j++)
//	{
//		for (int k = 0; k <= 1; k++)
//		{
//			for (int l = 0; l <= 1; l++)
//			{
//				int d = 1, e = 0;
//				if (i) { d *= 2; e++; }
//				if (j) { d *= 3; e++; }
//				if (k) { d *= 5; e++; }
//				if (l) { d *= 7; e++; }
//				if (e == 0) { continue; }
//				int sign = e % 2 == 1 ? 1 : -1;
//				count += sign * 100 / d;
//			}
//		}
//	}
//}
//for (int i = 0; i <= 1; i++)
//{
//	for (int j = 0; j <= 1; j++)
//	{
//		for (int k = 0; k <= 1; k++)
//		{
//			for (int l = 0; l <= 1; l++)
//			{
//				int d = 1; int ele = 0;
//				if (i) { d *= 2; ele++; }
//					if(j) { d *= 3; ele++;}
//						if(k) { d *= 8; ele++;}
//							if(l) { d *= 10; ele++;}
//							  if (ele == 0) { continue; }
//							int sign = ele % 2 == 1 ? 1 : -1;
//							count += sign * (100 / d);
//			}
//		}
//	}
//}
//cout << count;
