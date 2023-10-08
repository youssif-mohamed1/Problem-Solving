#include<iostream>	
#include<iomanip>
#include<vector>
#include<iterator>
#include<algorithm>


using namespace std;						/*~~~~~~~~~~YJooe~~~~~~~~~~*/

#define YJooe ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);



void test()
{
	int n, k = 0, j = 0, a = 0, c = 0, l = 0;
	bool flag = false;
	int maxi = 0;
	int mini = 0;
	cin >> n;
	vector<int>v(n + 2, 0);
	v[n + 1] = 1e9;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (v[i] < v[i - 1])
		{
			maxi = v[i - 1];
			if (flag == false) { flag = true; }
			else { cout<<"no";  goto here; }
			if (i != 1)
				mini = v[i - 2];
			while (v[i] < v[i - 1])
			{
				if (a == 0) { k = i - 1; a = 1; }
				i++;
				maxi = max(v[i], maxi);
				if (i > n) { break; }
			}
		}
		if (a == 1 && c == 0) {
			j = i - 1; c++;
			if (mini > v[j]) { cout << "no"; goto here; }
		}
		if (maxi > v[i] && flag) {
			cout<<"no"; goto here;
		}
	}
	if (k == 0 && j == 0)
	{
		k = 1; j = 1;
	}
	cout<<"yes\n"<< min(j, k)<<" "<< max(j, k);
here:
	j = 0;

}


int main()
{
	YJooe
		int t = 1;
	//cin >> t;
	while (t--) { test(); }
}

