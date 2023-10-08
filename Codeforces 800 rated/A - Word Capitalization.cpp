#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	

	string name, result = "";
	int spc = 0, n = 0, spce = 0;
	for (int i = 1; i > 0; i++)
	{
		name = str.substr(spce, str.find(' ', spce) - spce);
		spc = str.find(' ', spc + 1);
		spce = spc + 1;
		name[0] = toupper(name[0]);
		name = name.insert(name.size(), " ");
		if (n > 0)
		{
			n = result.size();

		}
		result = result.insert(n, name);
		if (n == 0)
		{
			n = name.size();
		}
		if (spce == 0)
		{
			break;;
		}
	}
	cout << result;
	return 0;
}