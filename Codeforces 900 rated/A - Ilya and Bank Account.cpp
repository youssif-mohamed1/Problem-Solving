#include <iostream>
#include <exception>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <cstring>
using namespace std;
 int main()
{
 long long n , k,h;
 cin>>n;
 string x;
 	x=to_string(n);
	k=x.size();
	 if(k==3 && x.find('0')!=-1)
 	{
 		cout<<0;
 		return 0;
 	}
else if(n>=0)
 {
 	cout<<n;
 	return 0;
 	}
 	else
{

if(int(x[k-1])-'0'>=int(x[k-2])-'0')
{
	h=k-1;
}
	else
{
	h=k-2;
	}
	}
	for(long long i=0;i<k;i++)
	{
		if(i!=h)
		{
			cout<<x[i];
			}
		}
    
}
