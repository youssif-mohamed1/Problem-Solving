#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;						/*~~~~~~~~~YJooe~~~~~~~~~*/
#define el cout<<endl;
void test() {
	int m, s;
	cin >> m >> s;
	if (s == 0 && m == 1)
	{
		cout << 0 << " " << 0;
	}
	else if ((s==0 && m>1) || m * 9 < s)
	{
		cout << "-1 -1";
	}
	else if(m * 9 == s)
	{
		string x = string(m, '0'+9);
		cout << x<<" " << x;
	}
	else
	{
		string x;
		for (int i = 0; i < s/9; i++)
		{
			x += (to_string(9));
		}
		if (x.size() != m)
		{
			x += to_string(s % 9);
			int remain = m - x.size();
			for (int i = 0; i < remain; i++)
			{
				x += to_string(0);
			}
		}string max = x;
		reverse(x.begin(), x.end());
		if (x[0] == '0')
		{
			x[0] = '1';
			for (int i = 1; i < x.size(); i++)
			{
				if (x[i] != '0')
				{
					x[i]--; break;
				}
			}
		}
		cout << x << " " << max;
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t = 1; //cin >> t;
	while (t--) { test();el}
}

