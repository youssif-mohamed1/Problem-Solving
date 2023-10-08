#include<iostream>
#include<math.h>
#define printyes cout<<"YES";
#define printno cout<<"NO";
using namespace std;
int main()
{
	int n,c=0;
	cin >> n;
	if (n % 2 == 0 && n>3)
	{
		printyes;
	}
	else  
	{
		printno;
	}
	return 0;
}

