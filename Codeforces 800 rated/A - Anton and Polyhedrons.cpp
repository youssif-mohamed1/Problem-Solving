#include <iostream>
#include <string>
#include<cstring>
using namespace std;
struct Shape {
	string y[5] = { "Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron" };
	int yy[5] = {4,6,8,12,20 };
}shape;
int main()
{
	long n;
	cin >> n;
	string* x = new string[n];
	for (long i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	long long sum = 0;
	for (long i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (x[i] == shape.y[j])
			{
				sum += shape.yy[j];
			}
		}
	}
	cout << sum;
	delete[]x;
}