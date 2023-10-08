#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<math.h>
#include<cmath>
using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/

#define el cout<<endl;
#define sp cout<<" ";
#define el3 cout<<endl<<endl<<endl;

void test() {
	int n;
	long double d, h;
	cin >> n >> d >> h;
	vector<long>v(n);
	for (int i =0;i<n;i++)
	{
		cin >> v[i];
	}
	long double totallArea=0;
	long double side = sqrt(pow(d / 2, 2) + pow(h,2));
	for (int i = 1; i < n ; i++)
	{
		long double differenceHeight =v[i] - v[i-1];
		totallArea += (0.5) * d * h;
		if (h > differenceHeight)
		{
			long double upperHeight = h - differenceHeight;
			long double hP = upperHeight / h;
			long double innerSide = hP * side;
			long double innerBase = 2*sqrt(pow(innerSide,2)-pow(upperHeight,2));
			totallArea -= 0.5 * innerBase * upperHeight;
		}
	}
	totallArea += (0.5) * d * h;
	cout <<fixed<<setprecision(6)<< totallArea;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
		int t = 1;
	cin >> t;
	while (t--) { test(); el; }
}
