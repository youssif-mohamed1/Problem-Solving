#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     double sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum / n;
    delete[]arr;
    return 0;
}