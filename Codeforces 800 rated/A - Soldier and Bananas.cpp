#include <iostream>
using namespace std;
int main() {
	long long n, k, w, sum = 0, c;
	cin >> k >> n >> w;
	c = k;
	for (int i = 1; i <= w; i++)
	{
		k = c;
		k *= i;
		sum += k;
	}
	if (sum > n)
	{
		cout << sum - n;
	}
	else 
	{
		cout << "0";
	}
		return 0;
}