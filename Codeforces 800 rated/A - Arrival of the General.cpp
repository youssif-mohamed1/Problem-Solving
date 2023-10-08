#include<iostream>
using namespace std;
int findmax(int* arr, int n);
int findmin(int* arr, int n);
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = (findmax(arr, n) - 1) + (n - findmin(arr, n));
    if ((findmax(arr, n)) > (findmin(arr, n)))
    {
        sum -= 1;
    }
    cout << sum;
 return 0;
}
int findmax(int* arr,int n)
{
    int max = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            t = i;
        }
    }
    return t+1;
}
int findmin(int* arr, int n)
{
    int min = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min || i==0)
        {
            min = arr[i];
            t = i;
        }
    }
    return t+1;
}