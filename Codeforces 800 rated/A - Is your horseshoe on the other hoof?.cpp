#include<iostream>
#include <string>
using namespace std;
int main() {
    int64_t arr[4] = { 0 };
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    for (int i = 0; i < 4;)
    {
        for (int j = i; j < 4; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                c++;
                j++;
                goto here;
            }
        }
    here:
        i++;
    }
    if (c > 0)
    {
        cout << c;
    }
    else if (c == 0)
    {
        cout << "0";
    }
    return 0;
}