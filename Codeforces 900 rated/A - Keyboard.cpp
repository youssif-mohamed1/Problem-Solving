#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//struct Qwerty {
//	string xl;
//	int i[30];
//};
int main() {
	string x;
     x= "qwertyuiopasdfghjkl;zxcvbnm,./";
	 char l;
	 string n;
	 int f = 0;
	 cin >> l>>n;
	 if (l == 'L')
	 {
		 for (int i = 0; i < n.size(); i++)
		 {
			 f = x.find(n[i]);
			 f++;
			 cout << x[f];
		 }
	 }
	 else
	 {
		 for (int i = 0; i < n.size(); i++)
		 {
			 f = x.find(n[i]);
			 f--;
			 cout << x[f];
		 }
	 }
}