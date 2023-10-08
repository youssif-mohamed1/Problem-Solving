#include <iostream>
using namespace std;
int removeneg(int n);
int main()
{
	int arr[3];
	int ans;
	cin >> arr[0] >> arr[1] >> arr[2];
	int mid;
	if ((arr[0] <= arr[1] && arr[0] >= arr[2]) || (arr[0] >= arr[1] && arr[0] <= arr[2]))
	{
		ans = removeneg(arr[1] - arr[0]);
		ans += removeneg(arr[2] - arr[0]);
	}
	else if ((arr[1] <= arr[0] && arr[1] >= arr[2]) || (arr[1] >= arr[0] && arr[1] <= arr[2]))
	{
		ans = removeneg(arr[0] - arr[1]);
		ans += removeneg(arr[2] - arr[1]);
	}
	else if ((arr[2] <= arr[0] && arr[2] >= arr[1]) || (arr[2] >= arr[0] && arr[2] <= arr[1]))
	{
		ans = removeneg(arr[1] - arr[2]);
		ans += removeneg(arr[0] - arr[2]);
	}
	cout << ans;
}
int removeneg(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return n;
	}
}