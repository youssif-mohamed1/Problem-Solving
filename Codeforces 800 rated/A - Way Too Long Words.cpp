#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int n;
	cin >> n;
	string* s = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int u = 0;
	for (int i = 0; i < n; i++)
	{ 
	     if (s[i].size() > 10)
		{
			 s[i] = s[i].substr(0, 1) + to_string(s[i].size()-2) + s[i].substr(s[i].size()-1, s[i].size());
			 cout << s[i]<<"\n";
		}
         else if (s[i].size() <= 10)
		{
			cout << s[i]<<"\n";
		}
	}
	delete[] s;
		return 0;
}