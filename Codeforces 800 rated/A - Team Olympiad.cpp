#include <iostream>
#define no cout<<"0";
#define sp cout<<" ";
#define el cout<<endl;
#define ret return 0;
using namespace std;
int min(int u, int p, int m);
struct child {
	int prg;
	int mat;
	int pe;
};
int main()
{
	int n;
	cin >> n;
	child* arr = new child[n];
	int w,u=0,m=0,p=0;
	for (int i = 0; i < n; i++)
	{
		cin >> w;
		if (w == 1)
		{
			arr[u].prg = i+1;
			u++;
		}
		else if (w == 2)
		{
			arr[m].mat = i+1;
			m++;
		}
		else if (w == 3)
		{
			arr[p].pe = i+1;
			p++;
		}
	}
	if (min(u, p, m) == 0) { no; ret; }
	cout << min(u, p, m); el;
	for (int i = 0; i < min(u,p,m); i++)
	{
		cout << arr[i].prg; sp; cout << arr[i].mat; sp; cout << arr[i].pe; el;
	}
	ret;
}
int min(int u,int p,int m)
{
	int temp = u;
	int crr[3];
	crr[0] = u;
	crr[1] = p;
	crr[2] = m;
    for (int i = 1; i < 3; i++)
    {
        if (temp >= crr[i])
        {
            temp = crr[i];
        }
    }
    return temp;
}
//struct child {
//	int n;
//	int p;
//};
//int main()
//{
	//int n;
	//cin >> n;
	//child* arr = new child[n];
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> arr[i].p;
	//	arr[i].n = i + 1;
	//}
	//child temp;
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (arr[j].p > arr[j + 1].p)
	//		{
	//			temp = arr[j];
	//			arr[j]= arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
 //   }

//}









//int* linearsort(int* arr, int n);
//int min(int* crr);
//int main() {
//
//    int n;
//    cin >> n;
//    int* arr = new int[n],c=0/*,*p*/,crr[3]={0,0,0};
//    int* brr = new int[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//        //if(arr[i]='')
//    }
//    //p = linearsort(arr,n);
//    int u = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == 1 && crr[0] == 0)
//        {
//            crr[0]++;
//            brr[i] = i;
//            c++;
//        }
//        else if (arr[i] == 2 && crr[1] == 0)
//        {
//            crr[1]++;
//            brr[i] = i;
//            c++;
//        }
//        else if (arr[i] == 3 && crr[2] == 0)
//        {
//            crr[2]++;
//            brr[i] = i;
//            c++;
//        }
//        if (c == 3)
//        {
//            crr[0] = 0;
//            crr[1] = 0;
//            crr[2] = 0;
//            c = 0;
//        }
//    }
//    cout << min(crr) << "\n";
//    for (int i = 0; i < n; i++)
//    {
//        cout << brr[i] << "\n";
//    }
//    return 0;
//}
//int min(int *crr)
//{
//    int temp=crr[0];
//    for (int i = 1; i < 3; i++)
//    {
//        if (temp >= crr[i])
//        {
//            temp = crr[i];
//        }
//    }
//    return temp;
//}
////int* linearsort(int* arr,int n)
////{
////    int temp = 0;
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = 0; j < n; j++)
////        {
////            if (arr[j] > arr[j + 1])
////            {
////                temp = arr[j];
////                arr[j] = arr[j + 1];
////                arr[j + 1] = temp;
////            }
////        }
////    }
////    return arr;
////}
